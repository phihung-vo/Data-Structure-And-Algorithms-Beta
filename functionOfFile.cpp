#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include"function.h"

//For File function

void savedsltam(DSLOP *dslop){
	int slsv;
	FILE *f; f = fopen("dsltam.bin", "w");
    
    if(!f){
    	printf("Khong the mo file DSLOP");
	}else{
		for(int i=0;i<dslop->n;i++){
			NODESINHVIEN temp=NULL;
			fprintf(f,"%s\n",dslop->lop[i]->malop);
			fprintf(f,"%s\n",dslop->lop[i]->tenlop);
			fprintf(f,"%s\n",dslop->lop[i]->nienkhoa);
			
			temp=dslop->lop[i]->dssinhvien;
			slsv=countSV(temp);
			fprintf(f,"%d\n",slsv);
			
			int k=0;
			while((temp!=NULL)&&(k<slsv)&&(slsv>0)){
				fprintf(f,"%s\n",temp->sinhvien.masv);
				fprintf(f,"%s\n",temp->sinhvien.ho);
				fprintf(f,"%s\n",temp->sinhvien.ten);
				fprintf(f,"%s\n",temp->sinhvien.phai);
				fprintf(f,"%s\n",temp->sinhvien.password);
				temp=temp->next;
				k++;
			}			
		}
	}
	fclose(f);
}

//void savedsltam(DSLOP &dsltam){
//     FILE *file;
//     file = fopen("dsltam.bin", "a");
//     for(int i=0;i<dsltam.n;i++){
//     	fwrite(dsltam.lop[i],sizeof(dsltam.lop[i]),1,file);
//	 }     
//     fclose(file);                    
//}

//void loaddsltam(DSLOP *dsltam){
//	FILE *file;
//     LOP *lop;
//     lop=(LOP *)malloc(sizeof(LOP));
//     file = fopen("dsltam.bin","r");
//     int count = 0;
//     if(file==NULL){printf("\nKhong tim thay file DSLOP!");}
//     else{
//            while(fread(lop,sizeof(*lop),1,file))
//		    {
//                
//    			dsltam->lop[count]=lop;
//   			    (dsltam->n) = count;
//    			lop=(LOP *)malloc(sizeof(LOP));
//    			count = count + 1;
//	    	}
//	    	free(lop);
//          
//          (dsltam->n) = count;
//     }
//     (dsltam->n) = count;  
//     fclose(file);        
//}

//void indsltam() {
//    system("cls");fflush(stdin);
//    DSLOP dslop;
//    loaddsltam(&dslop);
//   
//    short int x=100;
//    short int y=10;
//   
//    gotoxy(0,y-2);
//	printf("Nhan ESC de tro ve menu!!");
//	displayOuputDSLop(50,25);
//	gotoxy(30,y-1);
//	printf("MA LOP");
//	gotoxy(73,y-1);
//	printf("TEN LOP");
//	gotoxy(124,y-1);
//	printf("NIEN KHOA");
//	char c;
//	for(int i=0;i<dslop.n;i++) {
//		gotoxy(5,y+i); printf("%d",i+1);
//		gotoxy(20,y+i);
//        printf("%s",dslop.lop[i]->malop,"  ");
//        gotoxy(50,y+i);
//	    printf("%s",dslop.lop[i]->tenlop,"  ");
//	    gotoxy(124,y+i);
//	    printf("%s\n",dslop.lop[i]->nienkhoa);
//	    if(dslop.lop[i]->dssinhvien==NULL){
//	    	gotoxy(150,y+i);
//	    	printf("NULL %d", &dslop.lop[i]->dssinhvien);
//		}
//	}
//    while(c !=27){
//	   	c=getch();fflush(stdin);
//	}
//}   

void saveDSLop(char maLop[20],char tenLop[20],DSLOP *dslop){
     FILE *file;
     file = fopen(CLASSFILE, "a");
     LOP *temp;
     temp = (LOP *)malloc(sizeof(LOP));
     strcpy(temp->malop,maLop);
     strcpy(temp->tenlop,tenLop);
     fwrite(temp,sizeof(*temp),1,file);
     
     fclose(file);                    
}

void loadDSLop(DSLOP *dslop){
     FILE *file;
     LOP *lop;
     lop=(LOP *)malloc(sizeof(LOP));
     file = fopen(CLASSFILE,"r"); 
     int count = 0;
     if(file==NULL){printf("\nKhong tim thay file DSLOP!");}
     else{
            while(fread(lop,sizeof(*lop),1,file))
		    {
                
    			dslop->lop[count]=lop;
   			    (dslop->n) = count;
    			lop=(LOP *)malloc(sizeof(LOP));
    			count = count + 1;
	    	}
	    	free(lop);
          
          (dslop->n) = count;
     }
     (dslop->n) = count;  
     fclose(file);                                    
}

void inDSLop() {
    system("cls");fflush(stdin);
    DSLOP dslop;
    loadDSLop(&dslop);
   
    short int x=100;
    short int y=10;
   
    gotoxy(0,y-2);
	printf("Nhan ESC de tro ve menu!!");
	displayOuputDSLop(50,25);
	gotoxy(30,y-1);
	printf("MA LOP");
	gotoxy(73,y-1);
	printf("TEN LOP");
	gotoxy(124,y-1);
	printf("NIEN KHOA");
	char c;
	for(int i=0;i<dslop.n;i++) {
		gotoxy(5,y+i); printf("%d",i+1);
		gotoxy(20,y+i);
        printf("%s",dslop.lop[i]->malop,"  ");
        gotoxy(50,y+i);
	    printf("%s",dslop.lop[i]->tenlop,"  ");
	    gotoxy(124,y+i);
	    printf("%s\n",dslop.lop[i]->nienkhoa);
	    if(dslop.lop[i]->dssinhvien==NULL){
	    	gotoxy(150,y+i);
	    	printf("NULL %d", &dslop.lop[i]->dssinhvien);
		}
	}
    while(c !=27){
	   	c=getch();fflush(stdin);
	}
}    
     
//Function For MonHoc
void loadDSMon(DSMON *dsmon){
     FILE *file;
     MON *mon;
     mon=(MON *)malloc(sizeof(MON));
     file = fopen(OBJECTFILE,"rb"); 
     int count = 0;
     if(file==NULL){}
     else{
            while(fread(mon,sizeof(*mon),1,file))
		    {
                
    			dsmon->dsmon[count]=mon;
   			    (dsmon->n) = count;
    			mon=(MON *)malloc(sizeof(MON));
    			count = count + 1;
	    	}
	    	free(mon);
          
          (dsmon->n) = count;
     }
     (dsmon->n) = count;  
     fclose(file);            
                  
                  
}

void saveDSMon(char maMon[MAX],char  tenMon[MAX],DSMON *dsmon){//dsmon->dsmon[dsmon->n]->mamh);
     FILE *file;
     file = fopen(OBJECTFILE, "ab");
     MON *temp;
     temp = (MON *)malloc(sizeof(MON));
     strcpy(temp->mamh,maMon);
     strcpy(temp->tenmh,tenMon);
     fwrite(temp,sizeof(*temp),1,file);
     fclose(file);
    
}
