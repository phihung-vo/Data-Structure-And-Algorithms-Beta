#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <fstream>

#include<windows.h>
#include "file.h"
#include "ctdl.h"
#define MAX       100      
#define MAXMMH    15


void gotoxy(short int x,short int y){
	static HANDLE h = NULL;
	if(!h)
	{
		h = GetStdHandle(STD_OUTPUT_HANDLE);
	}
	COORD c = {x,y};
	SetConsoleCursorPosition(h,c);
}

void backSpace(int x,int y){
     gotoxy(x,y);
     printf("%s"," ");
     
     }

void initialize(NODECAUHOI &root){
    root = NULL;
}

void xoa(char *a, int vitri){
    int n = strlen(a);
    for (int i=vitri; i<n; i++){
        a[i] = a[i + 1];
    }
    n--;
}

int xoakhoangtrang(char *a){
    int n=strlen(a);
    for (int i = 0; i < n; i++){
        if (a[0] == 32){
            xoa(a, 0);
            n--;
        }
        if (a[n-1] == 32){
            xoa(a, n-1);
            n--;
        }
        if (a[i] == 32 && a[i + 1] == 32){
            xoa(a, i);
            i--;
            n--;
        }
    }
    return 0;
}

void inhoa(char *a){
	for(int i=0; i< strlen(a); i++){
		if(a[i]>97&&a[i]<122){
			a[i]=a[i]-32;
		}
	}
}

bool checkIfAnswerIsTrueCharacter(char c) {
	if((int)c ==97 || (int)c ==98 || (int)c ==99 || (int)c ==100 ||
		(int)c ==65 || (int)c ==66 || (int)c ==67 || (int)c ==68  )return true;
	return false;     
}
     
void nhapCH(NODECAUHOI &dsch, CAUHOI cauhoi){
	char option;
	
Loop:	do{
//		do{
			printf("Nhap ID cau hoi: ");
			scanf("%d", &cauhoi.id);
			fflush(stdin);						
			printf("Nhap MAMH: ");
			do{
				gets(cauhoi.mamh);
				fflush(stdin);
				xoakhoangtrang(cauhoi.mamh);
				inhoa(cauhoi.mamh);
				if(strlen(cauhoi.mamh)==0||strlen(cauhoi.mamh)>sizeof(cauhoi.mamh)){
					backSpace(11,1);gotoxy(11,1);
					printf("\tNhap lai MAMH: ");
				}
			}while(strlen(cauhoi.mamh)==0||strlen(cauhoi.mamh)>sizeof(cauhoi.mamh));
			printf("Nhap noi dung cau hoi: ");
			do{
				gets(cauhoi.nd);
				fflush(stdin);
				xoakhoangtrang(cauhoi.nd);
				inhoa(cauhoi.nd);
				if(strlen(cauhoi.nd)==0||strlen(cauhoi.nd)>sizeof(cauhoi.nd)){
					printf("Nhap lai noi dung cau hoi: ");
				}
			}while(strlen(cauhoi.nd)==0||strlen(cauhoi.nd)>sizeof(cauhoi.nd));
			printf("A: ");
			
			do{
				gets(cauhoi.a);
				fflush(stdin);
				xoakhoangtrang(cauhoi.a);
				inhoa(cauhoi.a);
				if(strlen(cauhoi.a)==0||strlen(cauhoi.a)>sizeof(cauhoi.a)){
					printf("Nhap lai A: ");
				}
			}while(strlen(cauhoi.a)==0||strlen(cauhoi.a)>sizeof(cauhoi.a));
			printf("B: ");
			do{
				gets(cauhoi.b);
				fflush(stdin);
				xoakhoangtrang(cauhoi.b);
				inhoa(cauhoi.b);
				if(strlen(cauhoi.b)==0||strlen(cauhoi.b)>sizeof(cauhoi.b)){
					printf("Nhap lai B: ");
				}
			}while(strlen(cauhoi.b)==0||strlen(cauhoi.b)>sizeof(cauhoi.b));
			printf("C: ");
			do{
				gets(cauhoi.c);
				fflush(stdin);
				xoakhoangtrang(cauhoi.c);
				inhoa(cauhoi.c);
				if(strlen(cauhoi.c)==0||strlen(cauhoi.c)>sizeof(cauhoi.c)){
					printf("Nhap lai C: ");
				}
			}while(strlen(cauhoi.c)==0||strlen(cauhoi.c)>sizeof(cauhoi.c));
			printf("D: ");
			do{
				gets(cauhoi.d);
				fflush(stdin);
				xoakhoangtrang(cauhoi.d);
				inhoa(cauhoi.d);
				if(strlen(cauhoi.d)==0||strlen(cauhoi.d)>sizeof(cauhoi.d)){
					printf("Nhap lai D: ");
				}
			}while(strlen(cauhoi.d)==0||strlen(cauhoi.d)>sizeof(cauhoi.d));
			printf("Dap an: ");

		/*-------------------*/
			char c=' ';
			while(c!=13 ){
				c=getch();									
				if(checkIfAnswerIsTrueCharacter((char)c)==true){
						printf("%c",(char)c);
						cauhoi.da=(char)c;
				}
				if(c==8)backSpace(9-1,7);gotoxy(9-1,7);				
			}
		/*-------------------*/

//			char c=' ';
//			do{
//				c=getch();
//				while(c!=13 ){						
//					if(checkIfAnswerIsTrueCharacter((char)c)==true){
//							printf("%c",(char)c);
//							cauhoi.da[0]=(char)c;
//							cauhoi.da[1]='\0';
//					}
//					if(c==8)backSpace(9-1,7);gotoxy(9-1,7);
//					if(c==13){
//						if(checkIfAnswerIsTrueCharacter((char)c)==false){
//							printf("as");
//						}		
//					}				
//				}
//			}while((char)c!=' ');

		/*-------------------*/
			
			
		//Them ham LUU vso file     
		
		printf("\n%s","Ban co muon nhap them cau hoi? (Yes: Y/y; No: N/n): ");fflush(stdin);
     	scanf("%c", &option);
		if(option=='Y'||option=='y'){
			system("cls");    
			goto Loop;
		}
		if(option=='N'||option=='n'){
			exit(0);
		}
		
	}while(option=='Y'||option=='y');
}

void Insert_node(NODECAUHOI &p, CAUHOI cauhoi)
{	
		
		FILE *file;
		file = fopen("dscauhoi.bin","a");
		        
		if(p == NULL)    // nút p hi?n t?i s? là nút lá
	   	{
		     p->cauhoi = cauhoi;
		     p->left = NULL;     p->right = NULL;  		        
	   	}
	   	else{

		    if(cauhoi.id < (p->cauhoi.id) )
		      {Insert_node((p->left),cauhoi);}
		    else if(cauhoi.id > (p->cauhoi.id) ){Insert_node((p->right),cauhoi);}		    		    	
		    
	    
	    }
	    
	    fwrite(&cauhoi,sizeof(cauhoi),1,file);
		fclose(file);

		
   
}


void DSCH(NODECAUHOI p){
	if(p == NULL){
		printf("khong co CAUHOI");
		return;
	}
	NODECAUHOI x = p;
	while(x != NULL){
		printf("%d\n", x->cauhoi.id);
		x=x->right;
	}
}

void xuatfile(){
	CAUHOI *cauhoi;
	FILE *file;
	if(!(file = fopen(QUESTIONFILE,"rb"))){
		printf("File DSCH khong ton tai!");
	}else{
		while(fread(cauhoi, sizeof(*cauhoi), 1, file)){	
			printf("%d\n", cauhoi->id);
			printf("%s\n", cauhoi->mamh);
			printf("%s\n", cauhoi->nd);
			printf("%s\n", cauhoi->a);
			printf("%s\n", cauhoi->b);
			printf("%s\n", cauhoi->c);
			printf("%s\n", cauhoi->d);
			printf("%c\n", cauhoi->da);
		}
	}	
	fclose(file);
}

void savefile(CAUHOI ch){
	CAUHOI *tmp;
	tmp = (CAUHOI*)malloc(sizeof(CAUHOI));
	FILE *f; f=fopen(CLASSFILE,"ab");
	tmp->id=ch.id;
	strcpy(tmp->mamh,ch.mamh);
	strcpy(tmp->nd,ch.nd);
	strcpy(tmp->a,ch.a);
	strcpy(tmp->b,ch.b);
	strcpy(tmp->c,ch.c);
	strcpy(tmp->d,ch.d);
	tmp->da=ch.da;
	fwrite(&tmp,sizeof(*tmp),1,file);
	fclose(f);
}    
     
int main(){
	NODECAUHOI dscauhoi;
	CAUHOI cauhoi;	
	initialize(dscauhoi);
	
	nhapCH(dscauhoi);
//	Insert_node(dscauhoi,cauhoi);
//	printf("in node dsch\n");
//	DSCH(dscauhoi);
//	printf("in file dsch\n");
//	xuatFileDSCH();
	return 0;
}
