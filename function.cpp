#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<cstring>
#include<conio.h>
#include"setconsole.cpp"
#include"ctdl.h"
#include"function.h"
#include"file.h"
#include"functionForServices.cpp"
//Function For Display
OBJECR_LCT makeTable(OBJECR_LCT diemxy,int chieuDai,int chieuRong,char char_Cd,char char_Cr){
	gotoxy(diemxy.x,diemxy.y);
	for(int i=1;i<=chieuRong;i++)printf("%c",char_Cr);
	for(int i=1;i<=chieuDai;i++){
		gotoxy(diemxy.x,diemxy.y+i);printf("%c",char_Cd);
	}
	gotoxy(diemxy.x+1,diemxy.y+chieuDai);
	for(int i=1;i<=chieuRong;i++)printf("%c",char_Cr);
	for(int i=1;i<=chieuDai;i++){
		gotoxy(diemxy.x+chieuRong,diemxy.y+i);printf("%c",char_Cd);
	}
	diemxy.maxX = diemxy.x + chieuRong;
	diemxy.maxY = diemxy.y + chieuDai;
	return diemxy;
}
void menuDisplay() {
                        system("cls");
                        int menux = 70;
                        fflush(stdin);
                        gotoxy(menux,20);
                        printf("%s\n","_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
                        gotoxy(menux,20+1);
                        printf("%s\n","|                                                                                   |");
                        gotoxy(menux,20+2);
                        printf("%s\n","|                                                                                   |");
                        gotoxy(menux,20+3);
                        printf("%s\n","|                         1.Quan ly lop.                                            |");
                        gotoxy(menux,20+4);
                        printf("%s\n","|                         2.Quan ly sinh vien.                                      |");
                        gotoxy(menux,20+5);
                        printf("%s\n","|                         3.Quan ly mon hoc.                                        |");
                        gotoxy(menux,20+6);
                        printf("%s\n","|                         4.Quan ly cau hoi thi.                                    |");
                        gotoxy(menux,20+7);
                        printf("%s\n","|                         5.Thi Thu                                                 |");
                        gotoxy(menux,20+8);
                        printf("%s\n","|                                                                                   |");
                        gotoxy(menux,20+9);
                        printf("%s\n","_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
                        gotoxy(70+1,20+11);
                        printf("%s","Lua chon: ");
                        gotoxy(70+72,20+11);
                        printf("%s","ESC:Dieu Khien");
                        gotoxy(70+75,20+12);
                        printf("%s","ESC:Thoat");
                        gotoxy(70+72,20+13);
                        printf("%s","INSERT:Ghi");
                       
     
}
void menuDisplayQuanLySinhVien() {
     
     
     
     }
void menuDisplayQuanLyCauHoi(){
     
     
     }
void menuDisplayQuanLyLop() {
                        system("cls");
                        int menux = 70;
                        fflush(stdin);
                        gotoxy(menux,20);
                        printf("%s\n","_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
                        gotoxy(menux,20+1);
                        printf("%s\n","|                                                                                   |");
                        gotoxy(menux,20+2);
                        printf("%s\n","|                                                                                   |");
                        gotoxy(menux,20+3);
                        printf("%s\n","|                         1.Them Lop.                                               |");
                        gotoxy(menux,20+4);
                        printf("%s\n","|                         2.Xoa lop.                                                |");
                        gotoxy(menux,20+5);
                        printf("%s\n","|                         3.Hieu chinh thong tin lop.                               |");
                        gotoxy(menux,20+6);
                        printf("%s\n","|                         4.In danh sach lop.                                       |");
                        gotoxy(menux,20+7);
                        printf("%s\n","|                                                                                   |");
                        gotoxy(menux,20+8);
                        printf("%s\n","_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
                        gotoxy(70+1,20+9);
                        printf("%s","Lua chon: ");
                        gotoxy(70+72,20+9);
                        printf("%s","ESC:Dieu Khien");
                        gotoxy(70+75,20+10);
                        printf("%s","ESC:Thoat");
                        gotoxy(70+72,20+11);
                        printf("%s","INSERT:Ghi");
                        gotoxy(70+10,20+9);          
     
     
     } 
void menuDisplayQuanLyMonHoc() {
                        system("cls");
                        int menux = 70;
                        fflush(stdin);
                        gotoxy(menux,20);
                        printf("%s\n","_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
                        gotoxy(menux,20+1);
                        printf("%s\n","|                                                                                   |");
                        gotoxy(menux,20+2);
                        printf("%s\n","|                                                                                   |");
                        gotoxy(menux,20+3);
                        printf("%s\n","|                         1.Them mon hoc.                                           |");
                        gotoxy(menux,20+4);
                        printf("%s\n","|                         2.Xoa mon hoc.                                            |");
                        gotoxy(menux,20+5);
                        printf("%s\n","|                         3.Hieu chinh thong tin mon hoc.                           |");
                        gotoxy(menux,20+6);
                        printf("%s\n","|                         4.In danh sach mon hoc.                                   |");
                        gotoxy(menux,20+7);
                        printf("%s\n","|                                                                                   |");
                        gotoxy(menux,20+8);
                        printf("%s\n","_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
                        gotoxy(70+1,20+9);
                        printf("%s","Lua chon: ");
                        gotoxy(70+72,20+9);
                        printf("%s","ESC:Dieu Khien");
                        gotoxy(70+75,20+10);
                        printf("%s","ESC:Thoat");
                        gotoxy(70+72,20+11);
                        printf("%s","INSERT:Ghi");
                        gotoxy(70+10,20+9);          
     
     
     } 
int menuQuanLyLop(DSLOP *dslop) {
    
 MENU:    menuDisplayQuanLyLop();
                        
          int choise = -1;
          char chon[3] = "";
                
Wait:                   if(kbhit()){
                                        char c = getch(); 
                           Esc:         if(c==27){return 1;}
                                    	if(c==-32){ 
                                                                       //nhan insert
                                                      gotoxy(70+10,20+9);
                                                      fflush(stdin);
                                                      gotoxy(70+10,20+9);
                                                      scanf("%d",&choise);
                                                      
                                                      switch(choise) {
                                                                           case 1:{
                                                                                    nhapDSLop(dslop); 
                                                                                     goto MENU;
                                                                                
                                                                                }
                                                                           case 2:{
                                                                                    //Xu ly Xoa lop  
                                                                                     goto MENU;
                                                                                
                                                                                }
                                                                           case 3:{
                                                                                    //Xu ly  Hieu chinh lop  
                                                                                     goto MENU;
                                                                                
                                                                            }
                                                      }
                                      }
                           }
                                    
                                                    
 goto Wait;                       
 return 1;            
        
     
     
 }
 int menuQuanLyMonHoc(DSMON *dsmon) {
    
 MENU:    menuDisplayQuanLyMonHoc();
                        
          int choise = -1;
          char chon[3] = "";
                
Wait:                   if(kbhit()){
                                        char c = getch(); 
                           Esc:         if(c==27){return 1;}
                                    	if(c==-32){ 
                                                                       //nhan insert
                                                      gotoxy(70+10,20+9);
                                                      fflush(stdin);
                                                      gotoxy(70+10,20+9);
                                                      scanf("%d",&choise);
                                                      printf("%d",choise);
                                                      switch(choise) {
                                                                           case 1:{
                                                                                    //Xu ly Them Mon Hoc 
                                                                                     nhapDSMon(dsmon);
                                                                                     goto MENU;
                                                                                
                                                                                }
                                                                           case 2:{
                                                                                    //Xu ly Xoa Mon Hoc  
                                                                                     goto MENU;
                                                                                
                                                                                }
                                                                           case 3:{
                                                                                    //Xu ly  Hieu chinh Mon  Hoc
                                                                                     goto MENU;
                                                                                
                                                                            }
                                                      }
                                      }
                           }
                                    
                                                    
 goto Wait;                       
 return 1;            
        
     
     
 }
int loginDisplay() {
        short int x=100;
        short int y=26;
        char username[] = ""; 
        char password[] = "";  
        system("cls");           
        gotoxy(x,y);
        printf("Nhap username: ");
        gotoxy(x,y+1);
        printf("Nhap password: ");
        gotoxy(x+15,y);
        scanf("%s",&username);//fflush(stdin);
        gotoxy(x+15,y+27);//fflush(stdin);
        scanf("%s",&password);
        return 1;//login thanh cong
     }   
int menu(DSLOP *dslop,DSMON *dsmon,NODECAUHOI *dscauhoi) { 
 
   
MENU:    int choise = -1;
         menuDisplay();
         gotoxy(70+10,20+11);               
                        
 Wait:                       if(kbhit()){
                                    	char c = getch();
                                    	if(c==27){return 1;}
                                    	if(c==-32){                    //nhan insert
                                                      gotoxy(70+10,20+11);
                                                      fflush(stdin);
                                                      scanf("%d",&choise);fflush(stdin); 
                                                      switch(choise) {
                                                                           case 1:{
                                                                                      menuQuanLyLop(dslop);
                                                                                      goto MENU;
                                                                                
                                                                                }
                                                                           case 2:{
                                                                                      //menuquanlysinnhvien
                                                                                      goto MENU;
                                                                                }
                                                                           case 3:{
                                                                                      menuQuanLyMonHoc(dsmon);
                                                                                      goto MENU;
                                                                                }
                                                                           case 4: {
                                                                                      //xu li thi thu
                                                                                      goto MENU;
                                                                                
                                                                                }
                                                                     
                                                                     }
                                                      }
                                        
                                    }
                        
 goto Wait;
                        
                
        
        Sleep(1000);
        system("cls");
    return 1;
    
    
 }

//Function For Class
bool trungMaLop(char s[MAXML], DSLOP *ds){
	for(int i=0;i<ds->n;i++){
		if(stricmp(ds->lop[i]->malop,s)==0){
			return true;
		}
	}
	return false;
}
void nhapDSLop(DSLOP *dslop) {
        
        
        /*char maLop[MAX]="";char tenLop[MAX]="";
        printf("%s%d\n","ds sau khi load: ",(dslop->n));  
        for(int i=1;i<=2;i++) {     
            printf("%s","Nhap ma lop: ");
            gets(maLop);fflush(stdin);
            printf("%s","Nhap ten lop: ");
            gets(tenLop);fflush(stdin);      
            insertClass(maLop,tenLop,dslop); 
           
        }*/
        displayOuputDSLop(50,25);
  
    }               
     
//Function For MonHoc
void nhapDSMon(DSMON *dsmon) {
 
    system("cls");fflush(stdin);
    displayOuputDSMon(50,25);
    char c;int i = 0;int j = 0;
    char maMon[MAX] = "";char tenMon[MAX] = "";
    gotoxy(70,20);
    printf("%s","Nhap ma mon: ");
    gotoxy(70,22);
    printf("%s","Nhap ten mon: ");
Len:gotoxy(70+13+i,20);
   while((maMon[i]=getch())!=13){
                          
                             
                             if(maMon[i]==80){
                                              backSpace(70+13+i-1,20);i--;
                                              goto Xuong; }
                             if(maMon[i]==8) {
                                                 i--;if(i<0)i=0;
                                                 
                                                     backSpace(70+13+i,20);
                                                    
                                                     gotoxy(70+13+i,20);
                                                 
                                             }
                                             
                                
                             else{
                                  printf("%c",(char)maMon[i]);i++;
                                   } 
                             
        }
   fflush(stdin);        
Xuong:   gotoxy(70+14+j,22);
   while((tenMon[j]=getch())!=13){
                           
                             if(tenMon[j]==72){
                                               backSpace(70+14+j-1,22);j--;
                                               goto Len; }
                             if(tenMon[j]==8) {
                                                 j--;if(j<0){j=0;}
                                                 else{
                                                 backSpace(70+14+j,22);
                                                 gotoxy(70+14+j,22);
                                                 }
                                             }
                                          
                            
                             else{
                                  printf("%c",(char)tenMon[j]);j++;
                             }
                                             
                                             
                                             
            
        }
     tenMon[j]='\0';maMon[i]='\0'; 
     //kiem tra truoc khi luu       
     insertObject(maMon,tenMon,dsmon);                                        
                                                   
    
    
    
  
    }
void displayOuputDSMon(int x,int y){
        gotoxy(x,y);
        printf("%s","- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
        gotoxy(x+1,y+1);
        printf("%s","|                     DANH SACH MON HOC                                 |");
        gotoxy(x,y+2);
        printf("%s","- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
     
     }     
void displayOuputDSLop(int x,int y){
        gotoxy(x,y);
        printf("%s","- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
        gotoxy(x+1,y+1);
        printf("%s","|                     DANH SACH LOP HOC                                 |");
        gotoxy(x,y+2);
        printf("%s","- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
     
     }                  
void inDSMon() {
       
       DSMON ds;
       loadDSMon(&ds);
       displayOuputDSMon(50,25);
      /* for(int i=0;i<ds.n;i++) {
           printf("%s%s",ds.dsmon[i]->mamh,"  ");
           printf("%s\n",ds.dsmon[i]->tenmh);
       }*/
     
     }
void insertObject(char maMon[MAX],char tenMon[MAX],DSMON *ds) {
      
       int count;
       MON *temp ;
       temp = (MON *)malloc(sizeof(MON));
       strcpy(temp->mamh,maMon);
       strcpy(temp->tenmh,tenMon);
       count = (ds->n);
       ds->dsmon[count] = temp; 
      (ds->n) = count+1; 
      saveDSMon(maMon,tenMon,ds);
    
     }
     

                 
     
//=============================================FUNCTION FOR STUDENT==========================================================//

        
    

void InitDSSV(NODESINHVIEN &First) {
	First=NULL;
}
NODESINHVIEN NewNode(){
	NODESINHVIEN p;
	p = (NODESINHVIEN)malloc(sizeof(nodesinhvien));
	return p;
}
NODESINHVIEN CreateNode(SINHVIEN &sv){
	NODESINHVIEN tmp=(NODESINHVIEN)malloc(sizeof(nodesinhvien));
	tmp->next=NULL;
	tmp->sinhvien=sv;
	return tmp;	
}
//nodepointer cho contro tro den node thu i trong danh sach lien ket
NODESINHVIEN nodepointer(NODESINHVIEN First, int i){
	NODESINHVIEN p;
	p=First;
	int pos=1;
	while(p!=NULL&&pos<i){
		p=p->next;
		pos++;
	}
	return p;
}
//position tra ve vi tri cua node p trong danh sach lien ket
int position(NODESINHVIEN First, NODESINHVIEN p){	
	NODESINHVIEN q;
	q=First;
	int pos=1;
	while(q!=NULL&&q!=p){
		q=q->next;
		pos++;
	}
	if(q==NULL) return -1;
	else return pos;
}
bool checkMSV(NODESINHVIEN First, char maSv[MAXMSV]){
	NODESINHVIEN p;
	for(p=First;p!=NULL;p=p->next){
		if(stricmp(p->sinhvien.masv,maSv)==0){return true; break;}
	}
	return false;
}
NODESINHVIEN Search_SV(NODESINHVIEN First, char maSv[MAXMSV]){
	NODESINHVIEN p;
	for(p=First;p!=NULL;p=p->next){
		if(stricmp(p->sinhvien.masv,maSv)==0){
			return p; break;
		}
	}	
	return NULL;
}
int EmptyDSSV(NODESINHVIEN &First){
	return(First==NULL ? 1 : 0);
}
//Them SV moi vao dau DSSV
void Insert_First_SV(NODESINHVIEN &First, SINHVIEN sv){	
	NODESINHVIEN p = (NODESINHVIEN)malloc(sizeof(nodesinhvien));
	p->sinhvien=sv;
	p->next=First;
	First=p;
}
//Them SV moi vao sau SV co dia chi p
void Insert_After_SV(NODESINHVIEN &p, SINHVIEN sv){
	
	if(p==NULL) printf("Khong the them SV vao DSSV!\n");
	else{
		NODESINHVIEN q = (NODESINHVIEN)malloc(sizeof(nodesinhvien));
		q->sinhvien=sv;
		q->next=p->next;
		p->next=q;		
	}
}
void Insert_Last_SV(NODESINHVIEN &First, SINHVIEN sv){
	NODESINHVIEN tmp;
	tmp=CreateNode(sv);
	if(First==NULL){
		First=tmp;
	}else{
		NODESINHVIEN p=First;
		while(p->next!=NULL){
			p=p->next;			
		}
		p->next=tmp;
	}
}
int countSV(NODESINHVIEN First){
	int count=0;
	NODESINHVIEN p = First;
	if(p==NULL) return 0;
	while(p!=NULL){
		count++; p=p->next;		
	}
	return count;
}
int countSV_DSLOP(DSLOP *dslop, char s[MAXML]){
	int count=0;	
	for(int i=0;i<dslop->n;i++){
		if(stricmp(dslop->lop[i]->malop,s)==0){
			NODESINHVIEN p = dslop->lop[i]->dssinhvien;
			if(p==NULL) return count=0;
			while(p!=NULL){
				count++; p=p->next;
			}
		}
	}
	return count;
}
void Duyet_DSSV(NODESINHVIEN First){
	NODESINHVIEN p;
	p=First;
	int stt=0;
	if(p==NULL) printf("DSSV rong!\n\n");
}
void Delete_First_SV(NODESINHVIEN &First){	
	if(EmptyDSSV(First)) printf("DSSV rong!");
	else{
		NODESINHVIEN p = First;
		First=p->next;
		delete p;
	}
}
//Xoa SV sau SV p
void Delete_After_SV(NODESINHVIEN p){	
	if(p==NULL||p->next==NULL) printf("Khong the xoa SV nay!\n");
	else{
		NODESINHVIEN q = p->next;
		p->next=q->next;
		delete q;
	}
}
void Clear_DSSV(NODESINHVIEN &First){
	NODESINHVIEN p; p=First;
	while(First!=NULL){
		p=First;
		First=First->next;
		free(p);
	}
}
void Input_SVtemp(SINHVIEN &sv){
	printf("---Input SV:\n");
	printf("Nhap MASV: ");	
	do{
		gets(sv.masv);
		fflush(stdin);
		delspace(sv.masv);
		uppercase(sv.masv);
		if(strlen(sv.masv)==0||strlen(sv.masv)>sizeof(sv.masv)){
			backSpace(0,1);gotoxy(0,1);
			printf("Nhap MASV: ");
		}
	}while(strlen(sv.masv)==0||strlen(sv.masv)>sizeof(sv.masv));
	printf("Nhap Ho: ");	
	do{
		gets(sv.ho);
		fflush(stdin);
		delspace(sv.ho);
		uppercase(sv.ho);
		if(strlen(sv.ho)==0||strlen(sv.ho)>sizeof(sv.ho)){
			backSpace(0,2);gotoxy(0,2);
			printf("Nhap Ho: ");
		}
	}while(strlen(sv.ho)==0||strlen(sv.ho)>sizeof(sv.ho));
	printf("Nhap Ten: ");	
	do{
		gets(sv.ten);
		fflush(stdin);
		delspace(sv.ten);
		uppercase(sv.ten);
		if(strlen(sv.ten)==0||strlen(sv.ten)>sizeof(sv.ten)){
			backSpace(0,3);gotoxy(0,3);
			printf("Nhap Ten: ");
		}
	}while(strlen(sv.ten)==0||strlen(sv.ten)>sizeof(sv.ten));
	printf("Nhap Phai: ");	
	do{
		gets(sv.phai);
		fflush(stdin);
		delspace(sv.phai);
		upper_first_char(sv.phai);
		if(strlen(sv.phai)==0||strlen(sv.phai)>sizeof(sv.phai)){
			backSpace(0,4);gotoxy(0,4);
			printf("Nhap Phai: ");
		}
	}while(strlen(sv.phai)==0||strlen(sv.phai)>sizeof(sv.phai));
	printf("Nhap Password: ");
	do{
		gets(sv.password);
		fflush(stdin);
		delspace(sv.password);
		if(strlen(sv.password)==0||strlen(sv.password)>sizeof(sv.password)){
			backSpace(0,5);gotoxy(0,5);
			printf("Nhap Password: ");
		}
	}while(strlen(sv.password)==0||strlen(sv.password)>sizeof(sv.password));
	sv.dsdiem=NULL;					
}
void Save_File_SV(SINHVIEN sv){	
	char save, tmp;
	
	while(1){
					
		printf("Ban co muon luu Sinh Vien nay vao FILE khong? (Yes:Y/y ; No:N/n): ");			
		save=getch();
		if(save=='Y'||save=='y'){
			gotoxy(66,6);
			printf("%c",(char)save);
			tmp=getch();
			if(tmp==13){
				FILE *file; file = fopen(STUDENTFILE,"ab");				
				if(fwrite(&sv,sizeof(sv),1,file)){
					printf("\nLuu FILE DSSV thanh cong.\n");
					fclose(file);
					break;
				}							
			}else{
				backSpace(66,6);
				gotoxy(0,6);
			}
		}else if(save=='N'||save=='n'){
			gotoxy(66,6);
			printf("%c",(char)save);
			tmp=getch();
			if(tmp==13){
				printf("\nBan da chon Khong luu SV nay!\n");
				break;
				exit(0);
			}else{
				backSpace(66,6);
				gotoxy(0,6);
			}				
		}else{
			backSpace(66,6);
			gotoxy(0,6);
		}
	}
}
NODESINHVIEN Input_DSSVtemp(){
	NODESINHVIEN First; InitDSSV(First);
	SINHVIEN sv;
	char option, tmp;
	
LoopInputSV:	Input_SVtemp(sv);
				Insert_Last_SV(First,sv);
	
		
	Save_File_SV(sv);
		
		
	while(1){
		printf("Ban co muon nhap them Sinh Vien? (Yes:Y/y ; No:N/n): ");
		option=getch();
		if(option=='Y'||option=='y'){
			gotoxy(53,8);
			printf("%c",(char)option);
			tmp=getch();
			if(tmp==13){
				system("cls");	
				goto LoopInputSV;
			}else{				
				backSpace(53,8);
				gotoxy(0,8);
			}				
		}else if(option=='N'||option=='n'){
			gotoxy(53,8);
			printf("%c",(char)option);
			tmp=getch();
			if(tmp==13){
				break;
//				exit(0);
			}else{
				backSpace(53,8);
				gotoxy(0,8);
			}		
		}else{
			backSpace(53,8);
			gotoxy(0,8);
		}
	}
	
	return First;
}
void Traverse_DSSV(NODESINHVIEN First){
	NODESINHVIEN p;
	p=First;
	if(p==NULL){
		printf("DSSV rong!");
	}else{
		int count=0;
		while(p!=NULL){		
			printf("\n%5d %10s %10s %10s %10s %10s %10s",++count,p->sinhvien.masv, p->sinhvien.ho, p->sinhvien.ten, p->sinhvien.phai, p->sinhvien.password,p->sinhvien.dsdiem);
			p=p->next;
		}
	}
}
void Output_SV(SINHVIEN sv){
	printf("%s", sv.masv);
	printf("%s", sv.ho);
}
bool Save_File_DSSV(SINHVIEN &sv){
	FILE *file;
	file = fopen(STUDENTFILE,"ab");
	SINHVIEN *temp;
	temp = (SINHVIEN *)malloc(sizeof(SINHVIEN));
	strcpy(temp->masv,sv.masv);
	strcpy(temp->ho,sv.ho);
	strcpy(temp->ten,sv.ten);
	strcpy(temp->phai,sv.phai);
	strcpy(temp->password,sv.password);
	if(fwrite(temp,sizeof(*temp),1,file)) return true;
	else return true;
	fclose(file);	
}
void Load_File_DSSV(){
	FILE *file;
	SINHVIEN sv;	
	if(!(file = fopen(STUDENTFILE,"rb"))){
		printf("\nFile DSSV khong ton tai!");
	}else{
		printf("\n---Load DSSV form file DSSV:\n");
		int count=0;
		while(fread(&sv,sizeof(sv),1,file)){
			printf("\n%d%8s",count++, sv.masv);			
		}
	}
	fclose(file);	
}
void Khung_Nhap_SV(OBJECR_LCT start, int dai, int rong, int col_right, int row_bottom){
	makeTable(start,dai,rong,'|','-');
	gotoxy((start.x+(rong-col_right)/2)-10,start.y+1);
	printf("NHAP THONG TIN SINH VIEN");
	gotoxy(start.x+1,start.y+3);
	printf("Nhap MALOP: ");
	gotoxy((start.x+(rong-col_right)/2)-5,start.y+3);
	printf("Nhap MASV: ");
	gotoxy((start.x+(rong-col_right)/2)-9,start.y+6);
	printf("NHAP THONG TIN CON LAI");
	gotoxy(start.x+1,start.y+7);
	printf("Nhap Ho: ");
	gotoxy(start.x+1,start.y+8);
	printf("Nhap Ten: ");
	gotoxy(start.x+1,start.y+9);
	printf("Nhap Phai: ");
	gotoxy(start.x+1,start.y+10);
	printf("Nhap Password: ");
	
	for(int i=1;i<rong;i++){		
		if(start.x+i<start.x+(rong-col_right)){
			gotoxy(start.x+i,start.y+5);
			printf("-");
			gotoxy(start.x+i,start.y+(dai-row_bottom));
			printf("-");
		}
		gotoxy(start.x+(rong-col_right),start.y+i);
		if(start.y+i<start.y+dai){
			printf("|");
		}
	}
}
void Khung_Tim_Kiem_SV(OBJECR_LCT start, int dai, int rong, int col_right, int row_bottom){
	makeTable(start,dai,rong,'|','-');
	gotoxy((start.x+(rong-col_right)/2)-10,start.y+1);
	printf("TRA CUU THONG TIN SINH VIEN");
	gotoxy(start.x+1,start.y+3);
	printf("Nhap MALOP: ");
	gotoxy((start.x+(rong-col_right)/2)-5,start.y+3);
	printf("Nhap MASV: ");
	gotoxy((start.x+(rong-col_right)/2)-10,start.y+6);
	printf("THONG TIN SINH VIEN");
	gotoxy(start.x+1,start.y+7);
	printf("Ho: ");
	gotoxy(start.x+1,start.y+8);
	printf("Ten: ");
	gotoxy(start.x+1,start.y+9);
	printf("Phai: ");
	gotoxy(start.x+1,start.y+10);
	printf("Password: ");
	
	for(int i=1;i<rong;i++){		
		if(start.x+i<start.x+(rong-col_right)){
			gotoxy(start.x+i,start.y+5);
			printf("-");
			gotoxy(start.x+i,start.y+(dai-row_bottom));
			printf("-");
		}
		gotoxy(start.x+(rong-col_right),start.y+i);
		if(start.y+i<start.y+dai){
			printf("|");
		}
	}
}
bool ESC_THOAT(OBJECR_LCT start,int dai, int rong, int col_right, int row_bottom, int x_esc, int y_esc){
	gotoxy(start.x+x_esc,start.y+(dai-row_bottom)+y_esc);
	printf("Ban co muon thoat khong?");					
	gotoxy(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
	int option, tmp;
	while(1){
		option=getch();
		if(option==89||option==121){       // "Y"/"y"
			printf("%c",(char)option);
			tmp=getch();
			if(tmp==13){
				return true;
			}else{				
				backSpace(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
				gotoxy(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
			}				
		}else if(option==78||option==110){ // "N"/"n"
			printf("%c",(char)option);
			tmp=getch();
			if(tmp==13){
				clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+3,start.x+(rong-col_right)-1,start.y+dai-1);  //row_under
				return false;															
			}else{
				backSpace(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
				gotoxy(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
			}		
		}else{
			backSpace(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
			gotoxy(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
		}
	}				
}
bool ESC_LUU(OBJECR_LCT start, int dai, int rong, int col_right, int row_bottom, int x_esc, int y_esc){
	gotoxy(start.x+x_esc,start.y+(dai-row_bottom)+y_esc);
	printf("Ban co muon luu SV nay khong?");
	gotoxy(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
	
	int save,save_tmp;
	while(1){
		save=getch();
		if(save==89||save==121){   // LUU
			printf("%c",(char)save);
			save_tmp=getch();
			if(save_tmp==13){
				return true;
			}else{
				backSpace(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
				gotoxy(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
			}
		}else if(save==78||save==110){  //KHONG LUU
			printf("%c",(char)save);
			save_tmp=getch();
			if(save_tmp==13){
				return false;			
			}else{
				backSpace(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
				gotoxy(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
			}
		}else{
			backSpace(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
			gotoxy(start.x+x_esc+5,start.y+(dai-row_bottom)+y_esc+1);
		}
	}
}
bool ESC_INPUTSV(OBJECR_LCT start, int dai, int rong, int col_right, int row_bottom, int x_esc, int y_esc){
	gotoxy(start.x+x_esc+35,start.y+(dai-row_bottom)+y_esc);
	printf("Ban co muon nhap tiep SV khong?");
	gotoxy(start.x+x_esc+5+35,start.y+(dai-row_bottom)+y_esc+1);
	
	int option, tmp;
	while(1){
		option=getch();
		if(option==89||option==121){       // "Y"/"y"
			printf("%c",(char)option);
			tmp=getch();
			if(tmp==13){
				clearPartOfScreen(start.x+13,start.y+3,start.x+13+MAXML,start.y+3);
				clearPartOfScreen((start.x+(rong-col_right)/2)+6,start.y+3,(start.x+(rong-col_right)/2)+6+MAXMSV,start.y+3);
				clearPartOfScreen(start.x+16,start.y+7,start.x+16+MAXHOSV,start.y+7);
				clearPartOfScreen(start.x+16,start.y+8,start.x+16+MAXTENSV,start.y+8);
				clearPartOfScreen(start.x+16,start.y+9,start.x+16+MAXPHAI,start.y+9);
				clearPartOfScreen(start.x+16,start.y+10,start.x+16+MAXPW,start.y+10);
				clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
				clearPartOfScreen(start.x+(rong-col_right)+2,start.y+dai-1,start.x+rong-1,start.y+dai-1);
				return true;
			}else{				
				backSpace(start.x+x_esc+5+35,start.y+(dai-row_bottom)+y_esc+1);
				gotoxy(start.x+x_esc+5+35,start.y+(dai-row_bottom)+y_esc+1);
			}				
		}else if(option==78||option==110){
			printf("%c",(char)option);
			tmp=getch();
			if(tmp==13){
				return false;
			}else{
				backSpace(start.x+x_esc+5+35,start.y+(dai-row_bottom)+y_esc+1);
				gotoxy(start.x+x_esc+5+35,start.y+(dai-row_bottom)+y_esc+1);
			}
		}else{
			backSpace(start.x+x_esc+5+35,start.y+(dai-row_bottom)+y_esc+1);
			gotoxy(start.x+x_esc+5+35,start.y+(dai-row_bottom)+y_esc+1);
		}
	}
}
void Input_SV(DSLOP *dslop){
	SINHVIEN sv; 
	NODESINHVIEN First;  InitDSSV(First);
//	DSLOP *dsltam; dsltam = (DSLOP*)malloc(sizeof(DSLOP));
	
	char key; bool exit0, back; char maLop[MAXML]; int x_esc=10; int y_esc=4;
	int i, vt_ml=0, vt_msv=0, vt_ho=0, vt_ten=0, vt_phai=0, vt_pw=0,vt=0; 
	
	OBJECR_LCT start; start.x=20; start.y=5;
	int dai=23; int rong=120; int col_right=35; int row_bottom=8;
	Khung_Nhap_SV(start,dai,rong,col_right,row_bottom);	

	maLop[vt_ml]='\0';
	sv.masv[vt_msv]='\0';
	sv.ho[vt_ho]='\0';
	sv.ten[vt_ten]='\0';
	sv.phai[vt_phai]='\0';
	sv.password[vt_pw]='\0';

MALOP:	/*loadDSLop(dslop);*/
//		dsltam=dslop;
		if(dslop->n<=0){
			gotoxy(start.x+(rong-col_right)+8,start.y+2);
			printf("Danh Sach Lop rong!");
		}else{
			gotoxy(start.x+(rong-col_right)+8,start.y+1);
			printf("DS LOP HIEN TAI:");
			for(i=0;i<dslop->n;i++){
				gotoxy(start.x+(rong-col_right)+10,start.y+2+i);
				printf("%d. %s",i+1,dslop->lop[i]->malop);
			}
		}
		gotoxy(start.x+x_esc,start.y+(dai-row_bottom)+1);
		printf("MALOP: TOI DA %d KY TU, BAO GOM A-Z, a-z, 0-9 HOAC DAU '-'",MAXML);				
		gotoxy(start.x+13+vt_ml,start.y+3);
		while(1){
			key=getch();
			if(key>=65&&key<=90||key>=97&&key<=122||key>=48&&key<=57||key==45){ //A-Z a-z 0-9
				if(vt_ml<MAXML){
					maLop[vt_ml]=(char)key;
					maLop[vt_ml]=toupper(maLop[vt_ml]);
					gotoxy(start.x+13+vt_ml,start.y+3);
					printf("%c",maLop[vt_ml]);
					vt_ml++;
				}else{					
					gotoxy(start.x+13+vt_ml,start.y+3);
					printf(" ");
					gotoxy(start.x+13+vt_ml,start.y+3);
				}
			}
			if(key==8&&vt_ml>0){   //BACKSPACE
				vt_ml--;
				gotoxy(start.x+13+vt_ml,start.y+3);
				printf(" ");
				gotoxy(start.x+13+vt_ml,start.y+3);
			}
			if(key==13&&vt_ml!=0){ //ENTER
				maLop[vt_ml]='\0';				
				if(trungMaLop(maLop,dslop)){
					gotoxy(start.x+13,start.y+3); printf("%s",maLop);
					gotoxy(start.x+(rong-col_right)+2,start.y+dai-1); printf("*Lop %s co %d SV.",maLop,countSV_DSLOP(dslop,maLop));
					clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
					goto MASV;
				}else{
					gotoxy(start.x+10,start.y+(dai-row_bottom)+3);
					printf("MALOP KHONG TON TAI!!! VUI LONG NHAP LAI MA LOP!");  Sleep(1000);
					clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+3,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
					clearPartOfScreen(start.x+13,start.y+3,start.x+13+MAXML,start.y+3); vt_ml=0;
					goto MALOP;
				}
			}
			if(key==27){        //ESC
				exit0 = ESC_THOAT(start,dai,rong,col_right,row_bottom,x_esc,y_esc);
				if(exit0==true){
					exit(0);
				}else{
					goto MALOP;
				}
			}
			if(key==-32){       
				key=getch();
				gotoxy(start.x+13+vt_ml,start.y+3);
			}
		}
	
MASV:	
		gotoxy(start.x+x_esc,start.y+(dai-row_bottom)+1);
		printf("MASV: TOI DA %d KY TU, BAO GOM A-Z, a-z, 0-9",MAXMSV);
		gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
		while(1){
			key=getch();
			if(key>=65&&key<=90||key>=97&&key<=122||key>=48&&key<=57){ //A-Z a-z 0-9
				if(vt_msv<MAXMSV){
					sv.masv[vt_msv]=(char)key;
					sv.masv[vt_msv]=toupper(sv.masv[vt_msv]);
					gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
					printf("%c",sv.masv[vt_msv]);
					vt_msv++;
				}else{					
					gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
					printf(" ");
					gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
				}
			}
			if(key==8&&vt_msv>0){   //BACKSPACE
				vt_msv--;
				gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
				printf(" ");
				gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
			}
			if(key==13&&vt_msv!=0){ //ENTER
							 
				//ktra Masv bi trung
				for(i=0;i<dslop->n;i++){
					if(stricmp(dslop->lop[i]->malop,maLop)==0){
						if(dslop->lop[i]->dssinhvien==NULL){
							clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
							goto HO;
						}else{
							char masv_tmp[MAXMSV]; strcpy(masv_tmp,sv.masv); masv_tmp[vt_msv]='\0';
							if(checkMSV(dslop->lop[i]->dssinhvien,masv_tmp)==true){
								//tbao sv bi trung
								gotoxy(start.x+10,start.y+(dai-row_bottom)+3);
								printf("MASV BI TRUNG!!! NHAP LAI MSV!");  Sleep(1000);
								clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+3,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom																		
								//nhap lai masv
								masv_tmp[0]='\0'; goto MASV;
							}else{
								clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom 
								masv_tmp[0]='\0'; goto HO;
							}
						}
					}
				}//
										
			}
			if(key==27){        //ESC
				exit0 = ESC_THOAT(start,dai,rong,col_right,row_bottom,x_esc,y_esc);
				if(exit0==true){
					exit(0);
				}else{
					goto MASV;
				}
			}
			if(key==-32){       
				key=getch();
				if(key==80&&vt_msv!=0){	   //DOWN
									
					//ktra Masv bi trung
					for(i=0;i<dslop->n;i++){
						if(stricmp(dslop->lop[i]->malop,maLop)==0){
							if(dslop->lop[i]->dssinhvien==NULL){
								clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
								goto HO;
							}else{
								char masv_tmp[MAXMSV]; strcpy(masv_tmp,sv.masv); masv_tmp[vt_msv]='\0';
								if(checkMSV(dslop->lop[i]->dssinhvien,masv_tmp)==true){
									//tbao sv bi trung
									gotoxy(start.x+10,start.y+(dai-row_bottom)+3);
									printf("MASV BI TRUNG!!! NHAP LAI MSV!");  Sleep(1000);
									clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+3,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom																		
									//nhap lai masv
									masv_tmp[0]='\0'; goto MASV;
								}else{
									clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom 
									masv_tmp[0]='\0'; goto HO;
								}
							}
						}
					}//														
					
				}else{
					gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
				}
			}
		}
HO:		
		gotoxy(start.x+x_esc,start.y+(dai-row_bottom)+1);
		printf("HO: TOI DA %d KY TU, BAO GOM A-Z, a-z, Khoang Trang",MAXHOSV);
		gotoxy(start.x+16+vt_ho,start.y+7);
		while(1){
			key=getch();
			if(key>=65&&key<=90||key>=97&&key<=122||key>=48&&key<=57||key==32){ //A-Z a-z 0-9
				if(vt_ho<MAXHOSV){
					sv.ho[vt_ho]=(char)key;
					gotoxy(start.x+16+vt_ho,start.y+7);
					printf("%c",sv.ho[vt_ho]);
					vt_ho++;
				}else{					
					gotoxy(start.x+16+vt_ho,start.y+7);
					printf(" ");
					gotoxy(start.x+16+vt_ho,start.y+7);
				}
			}
			if(key==8&&vt_ho>0){   //BACKSPACE
				vt_ho--;
				gotoxy(start.x+16+vt_ho,start.y+7);
				printf(" ");
				gotoxy(start.x+16+vt_ho,start.y+7);
			}
			if(key==13&&vt_ho!=0){ //ENTER
				clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
				goto TEN;
			}
			if(key==27){        //ESC
				exit0 = ESC_THOAT(start,dai,rong,col_right,row_bottom,x_esc,y_esc);
				if(exit0==true){
					exit(0);
				}else{
					goto HO;
				}
			}
			if(key==-32){       
				key=getch();
				if(key==72){		              //UP
					clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
					goto MASV;
				}else if(key==80&&vt_ho!=0){	  //DOWN
					clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
					goto TEN;
				}else{
					gotoxy(start.x+16+vt_ho,start.y+7);
				}
			}
		}	
TEN:	
		gotoxy(start.x+x_esc,start.y+(dai-row_bottom)+1);
		printf("TEN: TOI DA %d KY TU, BAO GOM A-Z, a-z, Khoang Trang",MAXTENSV);
		gotoxy(start.x+16+vt_ten,start.y+8);
		while(1){
			key=getch();
			if(key>=65&&key<=90||key>=97&&key<=122||key>=48&&key<=57){ //A-Z a-z 0-9
				if(vt_ten<MAXTENSV){
					sv.ten[vt_ten]=(char)key;
					gotoxy(start.x+16+vt_ten,start.y+8);
					printf("%c",sv.ten[vt_ten]);
					vt_ten++;
				}else{					
					gotoxy(start.x+16+vt_ten,start.y+8);
					printf(" ");
					gotoxy(start.x+16+vt_ten,start.y+8);
				}
			}
			if(key==8&&vt_ten>0){   //BACKSPACE
				vt_ten--;
				gotoxy(start.x+16+vt_ten,start.y+8);
				printf(" ");
				gotoxy(start.x+16+vt_ten,start.y+8);
			}
			if(key==13&&vt_ten!=0){ //ENTER
				clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
				goto PHAI;
			}
			if(key==27){        //ESC
				exit0 = ESC_THOAT(start,dai,rong,col_right,row_bottom,x_esc,y_esc);
				if(exit0==true){
					exit(0);
				}else{
					goto TEN;
				}
			}
			if(key==-32){       
				key=getch();
				if(key==72){		  //UP
					clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
					goto HO;
				}else if(key==80&&vt_ten!=0){	  //DOWN
					clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
					goto PHAI;
				}else{
					gotoxy(start.x+16+vt_ten,start.y+8);
				}
			}
		}
PHAI:	
		gotoxy(start.x+x_esc,start.y+(dai-row_bottom)+1);
		printf("PHAI: TOI DA %d KY TU, BAO GOM A-Z, a-z",MAXPHAI);
		gotoxy(start.x+16+vt_phai,start.y+9);
		while(1){
			key=getch();
			if(key>=65&&key<=90||key>=97&&key<=122||key>=48&&key<=57){ //A-Z a-z 0-9
				if(vt_phai<MAXPHAI){
					sv.phai[vt_phai]=(char)key;
					gotoxy(start.x+16+vt_phai,start.y+9);
					printf("%c",sv.phai[vt_phai]);
					vt_phai++;
				}else{					
					gotoxy(start.x+16+vt_phai,start.y+9);
					printf(" ");
					gotoxy(start.x+16+vt_phai,start.y+9);
				}
			}
			if(key==8&&vt_phai>0){   //BACKSPACE
				vt_phai--;
				gotoxy(start.x+16+vt_phai,start.y+9);
				printf(" ");
				gotoxy(start.x+16+vt_phai,start.y+9);
			}
			if(key==13&&vt_phai!=0){ //ENTER	
				sv.phai[vt_phai]='\0';			
				if(stricmp(sv.phai,"nam")==0||stricmp(sv.phai,"nu")==0||stricmp(sv.phai,"male")==0||stricmp(sv.phai,"female")==0){
					clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
					goto PASSWORD;
				}else{					
					gotoxy(start.x+10,start.y+(dai-row_bottom)+3);
					printf("PHAI LA: 'NU' HOAC 'NAM' HOAC 'FEMALE' HOAC 'MALE'!");
					clearPartOfScreen(start.x+16,start.y+9,start.x+16+MAXPHAI,start.y+9);
					vt_phai=0; goto PHAI;
				}
			}
			if(key==27){        //ESC
				exit0 = ESC_THOAT(start,dai,rong,col_right,row_bottom,x_esc,y_esc);
				if(exit0==true){
					exit(0);
				}else{
					goto PHAI;
				}
			}
			if(key==-32){       
				key=getch();
				if(key==72){		  //UP
					clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
					goto TEN;
				}else if(key==80&&vt_phai!=0){	  //DOWN
					sv.phai[vt_phai]='\0';			
					if(stricmp(sv.phai,"nam")==0||stricmp(sv.phai,"nu")==0||stricmp(sv.phai,"male")==0||stricmp(sv.phai,"female")==0){
						clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
						goto PASSWORD;
					}else{					
						gotoxy(start.x+10,start.y+(dai-row_bottom)+3);
						printf("PHAI LA: 'NU' HOAC 'NAM' HOAC 'FEMALE' HOAC 'MALE'!");
						clearPartOfScreen(start.x+16,start.y+9,start.x+16+MAXPHAI,start.y+9);
						vt_phai=0; goto PHAI;
					}
				}else{
					gotoxy(start.x+16+vt_phai,start.y+9);
				}
			}
		}	
PASSWORD:	
		gotoxy(start.x+x_esc,start.y+(dai-row_bottom)+1);
		printf("PASSWORD: TOI DA %d KY TU, BAO GOM A-Z, a-z, 0-9", MAXPW);
		gotoxy(start.x+16+vt_pw,start.y+10);
		while(1){
			key=getch();
			if(key>=65&&key<=90||key>=97&&key<=122||key>=48&&key<=57){ //A-Z a-z 0-9
				if(vt_pw<MAXPW){
					sv.password[vt_pw]=(char)key;
					gotoxy(start.x+16+vt_pw,start.y+10);
					printf("%c",sv.password[vt_pw]);
					vt_pw++;
				}else{					
					gotoxy(start.x+16+vt_pw,start.y+10);
					printf(" ");
					gotoxy(start.x+16+vt_pw,start.y+10);
				}
			}
			if(key==8&&vt_pw>0){   //BACKSPACE
				vt_pw--;
				gotoxy(start.x+16+vt_pw,start.y+10);
				printf(" ");
				gotoxy(start.x+16+vt_pw,start.y+10);
			}
			if(key==13&&vt_pw!=0){ //ENTER				
				exit0=ESC_LUU(start,dai,rong,col_right,row_bottom,x_esc,y_esc);
				if(exit0==true){					
					//luu
							
					sv.masv[vt_msv]='\0';
					sv.ho[vt_ho]='\0';
					char ho_tmp[MAXHOSV]; strcpy(ho_tmp,sv.ho); ho_tmp[vt_ho]='\0';
					delspace(ho_tmp); strcpy(sv.ho,ho_tmp);
					sv.ten[vt_ten]='\0';
					char ten_tmp[MAXTENSV]; strcpy(ten_tmp,sv.ten); ten_tmp[vt_ten]='\0';
					delspace(ten_tmp); strcpy(sv.ten,ten_tmp);
					sv.phai[vt_phai]='\0';
					sv.password[vt_pw]='\0';
					sv.dsdiem=NULL;																		
													
					for(i=0;i<dslop->n;i++){
						if(stricmp(dslop->lop[i]->malop,maLop)==0){
							Insert_Last_SV(dslop->lop[i]->dssinhvien,sv);
						}
					}
					
					savedsltam(dslop);
//					dslop=dsltam;																															
	
					//nhaptiep?
					back=ESC_INPUTSV(start,dai,rong,col_right,row_bottom,x_esc,y_esc);
					if(back==true){
						vt_ml=0; vt_msv=0; vt_ho=0; vt_ten=0; vt_phai=0; vt_pw=0;
						goto MALOP;
					}else{
						vt_ml=0; vt_msv=0; vt_ho=0; vt_ten=0; vt_phai=0; vt_pw=0;
						system("cls"); exit(0);
					}
										
				}else{
					//k luu
					
					vt_ml=0; vt_msv=0; vt_ho=0; vt_ten=0; vt_phai=0; vt_pw=0;
					
					sv.masv[vt_msv]='\0';
					sv.ho[vt_ho]='\0';
					sv.ten[vt_ten]='\0';
					sv.phai[vt_phai]='\0';
					sv.password[vt_pw]='\0';		
					
					//nhaptiep?
					back=ESC_INPUTSV(start,dai,rong,col_right,row_bottom,x_esc,y_esc);
					if(back==true){
						goto MALOP;
					}else{
						system("cls"); exit(0);
					}				
				}
			}
			if(key==27){        //ESC
				exit0 = ESC_THOAT(start,dai,rong,col_right,row_bottom,x_esc,y_esc);
				if(exit0==true){					
					exit(0);
				}else{
					goto PASSWORD;
				}
			}
			if(key==-32){       
				key=getch();
				if(key==72){		  //UP
					clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
					goto PHAI;
				}else{				
					gotoxy(start.x+16+vt_pw,start.y+10);
				}
			}
		}										
}
int Full(DSLOP *dslop){
	return (dslop->n == MAXCLASS ? 1:0);
}
//void Insert_Item(DSLOP *dslop, int i, LOP *lop){
//	int j;
//	if(i<0||i>dslop->n+1) printf("Vi tri them vao khong phu hop");
//	else{
//		if(Full(dslop)) printf("Danh sach lop da day");
//		else{
//			if(i==0) i=1;
//			for(j=dslop->n-1; j>=i-1; j--){
//				dslop->lop[j+1]=dslop->lop[j];
//				strcpy(dslop->lop[i-1]->malop,lop->malop);
//				strcpy(dslop->lop[i-1]->tenlop,lop->tenlop);
//				strcpy(dslop->lop[i-1]->nienkhoa,lop->nienkhoa);
//				dslop->lop[i]->dssinhvien=lop->dssinhvien;
//				dslop->n++;
//			}
//		}
//	}
//}

void insertClass(DSLOP *ds, LOP *lop) { //them lop       
       int count;
       LOP *temp;
       temp = (LOP *)malloc(sizeof(LOP));
       strcpy(temp->malop,lop->malop);
       strcpy(temp->tenlop,lop->tenlop);
       strcpy(temp->nienkhoa,lop->nienkhoa);//them cho nay
       temp->dssinhvien=lop->dssinhvien;
       count = (ds->n); 
       ds->lop[count] = temp;
       (ds->n) = count+1; 
//       saveDSLop(maLop,tenLop,nienKhoa,ds); "O CHO NAY DOI THANH HAM SAVEDSLTAM"
    
}

void loaddsltam(DSLOP *dslop){
	int slsv=0, k=0; NODESINHVIEN p; InitDSSV(p); SINHVIEN sv; LOP *lop;
//	for(int i=0;i<MAXCLASS;i++){
//		dslop->lop[i]=(LOP*)malloc(sizeof(LOP));
//		dslop->lop[i]->malop[0]='\0';
//		dslop->lop[i]->tenlop[0]='\0';
//		dslop->lop[i]->nienkhoa[0]='\0';
//		dslop->lop[i]->dssinhvien=NULL;
//	}
	
	FILE *f; f=fopen("dsltam.bin","r");
	if(!f){
		printf("Khong the mo file DSLOP");
	}
	char mL[MAXML],tL[MAXTL],nK[MAXNK],mSV[MAXMSV],hoSV[MAXHOSV],tenSV[MAXTENSV],phaiSV[MAXPHAI],pwSV[MAXPW],tmp[255];
	printf("while k\n");
	while(!feof(f)&&k<MAXCLASS){
		lop=(LOP*)malloc(sizeof(LOP));
		fgets(mL,255,f);
		strcpy(lop->malop,mL);
		fgets(tL,255,f);
		strcpy(lop->tenlop,tL);
		fgets(nK,255,f); 
		strcpy(lop->nienkhoa,nK);
		fscanf(f,"%d",&slsv);
		
		if(slsv>0){
			int j=0;
			while(j<slsv){ printf("trong while j\n");
				fgets(mSV,255,f);			
				strcpy(sv.masv,mSV); 
				fgets(hoSV,255,f);
				strcpy(sv.ho,hoSV);
				fgets(tenSV,255,f);
				strcpy(sv.ten,tenSV);
				fgets(phaiSV,255,f);
				strcpy(sv.phai,phaiSV);
				fgets(pwSV,255,f);
				strcpy(sv.password,pwSV);
							
				Insert_Last_SV(p,sv);
				j++;
			}
		}
		
		lop->dssinhvien=p;
		printf("k\n");
		k++;
		
		Insert_Item(dslop,k,lop);
	}
	for(int i=0;i<dslop->n;i++) {
		printf("%s\n",dslop->lop[i]->malop);
	}
	fclose(f);	
}
void indsltam() {
	DSLOP dslop;
    system("cls");fflush(stdin);    
    loaddsltam(&dslop);
   
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
//	    if(dslop.lop[i]->dssinhvien==NULL){
//	    	gotoxy(150,y+i);
//	    	printf("NULL %d", &dslop.lop[i]->dssinhvien);
//		}
	}
    while(c !=27){
	   	c=getch();fflush(stdin);
	}
}
void Tim_Kiem_SV(DSLOP *dslop){
	loadDSLop(dslop); NODESINHVIEN test, current; InitDSSV(test);
	
	char maLop[MAXML], maSv[MAXMSV], key, exit0; int i, vt_ml=0, vt_msv=0, x_esc=10, y_esc=4;
	
	OBJECR_LCT start; start.x=20; start.y=5;
	int dai=22; int rong=120; int col_right=35; int row_bottom=8;
	Khung_Tim_Kiem_SV(start,dai,rong,col_right,row_bottom);
	
	if(dslop->n<0){
		gotoxy(start.x+(rong-col_right)+8,start.y+3);
		printf("Danh Sach Lop rong!");
	}else{
		gotoxy(start.x+(rong-col_right)+8,start.y+1);
		printf("DS LOP HIEN TAI:");
		for(int i=0;i<dslop->n;i++){
			gotoxy(start.x+(rong-col_right)+10,start.y+2+i);
			printf("%d. %s",i+1,dslop->lop[i]->malop);
		}
	}
	
	maLop[vt_ml]='\0';
	maSv[vt_msv]='\0';
	
	
MALOP:	
		gotoxy(start.x+x_esc,start.y+(dai-row_bottom)+1);
		printf("MALOP: TOI DA %d KY TU, BAO GOM A-Z, a-z, 0-9 HOAC DAU '-'",MAXML);				
		gotoxy(start.x+13+vt_ml,start.y+3);
		while(1){
			key=getch();
			if(key>=65&&key<=90||key>=97&&key<=122||key>=48&&key<=57||key==45){ //A-Z a-z 0-9
				if(vt_ml<MAXML){
					maLop[vt_ml]=(char)key;
					maLop[vt_ml]=toupper(maLop[vt_ml]);
					gotoxy(start.x+13+vt_ml,start.y+3);
					printf("%c",maLop[vt_ml]);
					vt_ml++;
				}else{					
					gotoxy(start.x+13+vt_ml,start.y+3);
					printf(" ");
					gotoxy(start.x+13+vt_ml,start.y+3);
				}
			}
			if(key==8&&vt_ml>0){   //BACKSPACE
				vt_ml--;
				gotoxy(start.x+13+vt_ml,start.y+3);
				printf(" ");
				gotoxy(start.x+13+vt_ml,start.y+3);
			}
			if(key==13&&vt_ml!=0){ //ENTER
				maLop[vt_ml]='\0'; i=0;
				while(i<dslop->n){
					if(stricmp(dslop->lop[i]->malop,maLop)==0){  //dslop.lop[i]->malop
						test=dslop->lop[i]->dssinhvien;
						gotoxy(start.x+13,start.y+3); printf("%s",maLop);
						clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
						goto MASV;
					}else{
						gotoxy(start.x+10,start.y+(dai-row_bottom)+3);
						printf("MALOP KHONG TON TAI!!! VUI LONG NHAP LAI MA LOP!");  						
						while(vt_ml>0){
							backSpace(start.x+13+vt_ml,start.y+3);
							vt_ml--;																	
						}backSpace(start.x+13+vt_ml,start.y+3); gotoxy(start.x+13+vt_ml,start.y+3);
//						goto NHAPMALOP;
						i++;
					}
				}
			}
			if(key==27){        //ESC
				exit0 = ESC_THOAT(start,dai,rong,col_right,row_bottom,x_esc,y_esc);
				if(exit0==true){
					exit(0);
				}else{
					goto MALOP;
				}
			}
			if(key==-32){       
				key=getch();
				gotoxy(start.x+13+vt_ml,start.y+3);
			}
		}
	
MASV:	
		gotoxy(start.x+x_esc,start.y+(dai-row_bottom)+1);
		printf("MASV: TOI DA %d KY TU, BAO GOM A-Z, a-z, 0-9",MAXMSV);
		gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
		while(1){
			key=getch();
			if(key>=65&&key<=90||key>=97&&key<=122||key>=48&&key<=57){ //A-Z a-z 0-9
				if(vt_msv<MAXMSV){
					maSv[vt_msv]=(char)key;
					maSv[vt_msv]=toupper(maSv[vt_msv]);
					gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
					printf("%c",maSv[vt_msv]);
					vt_msv++;
				}else{					
					gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
					printf(" ");
					gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
				}
			}
			if(key==8&&vt_msv>0){   //BACKSPACE
				vt_msv--;
				gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
				printf(" ");
				gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
			}
			if(key==13&&vt_msv!=0){ //ENTER
							 
				//ktra masv
				for(i=0;i<dslop->n;i++){
					if(stricmp(dslop->lop[i]->malop,maLop)==0){
						if(dslop->lop[i]->dssinhvien==NULL){
							//tbao lop co dssv rong
							gotoxy(start.x+10,start.y+(dai-row_bottom)+3);
							printf("LOP %s CHUA CO SV!", maLop); Sleep(1500);
							//nhap lai masv
							clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
							clearPartOfScreen((start.x+(rong-col_right)/2)+6,start.y+3,(start.x+(rong-col_right)/2)+6+MAXMSV,start.y+3); vt_msv=0;
							clearPartOfScreen(start.x+13,start.y+3,start.x+13+MAXML,start.y+3); vt_ml=0;
							goto MALOP;
						}else{
							char masv_tmp[MAXMSV]; strcpy(masv_tmp,maSv); masv_tmp[vt_msv]='\0';
							for(NODESINHVIEN p=test;p!=NULL;p=p->next){
								if(stricmp(p->sinhvien.masv,masv_tmp)==0){
									clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
									//in sv ra
									gotoxy((start.x+(rong-col_right)/2)+6,start.y+3); printf("%s %s",masv_tmp,p->sinhvien.masv);
									gotoxy(start.x+16,start.y+7); printf("%s",p->sinhvien.ho);
									gotoxy(start.x+16,start.y+8); printf("%s",p->sinhvien.ten);
									gotoxy(start.x+16,start.y+9); printf("%s",p->sinhvien.phai);
									gotoxy(start.x+16,start.y+10); printf("%s",p->sinhvien.password);
								}else{
									//tbao masv k dung
									gotoxy(start.x+10,start.y+(dai-row_bottom)+3);
									printf("KHONG TIM THAY MASV NAY! NHAP LAI MSV!");
									//nhap lai masv
									goto MASV;
								}
							}
						}
					}
				}//	
							
			}
			if(key==27){        //ESC
				exit0 = ESC_THOAT(start,dai,rong,col_right,row_bottom,x_esc,y_esc);
				if(exit0==true){
					exit(0);
				}else{
					goto MASV;
				}
			}
			if(key==-32){       
				key=getch();
				if(key==80&&vt_msv!=0){	   //DOWN
													
					//ktra Masv bi trung
					for(i=0;i<dslop->n;i++){
						if(stricmp(dslop->lop[i]->malop,maLop)==0){
							if(dslop->lop[i]->dssinhvien==NULL){
								//tbao lop co dssv rong
								gotoxy(start.x+10,start.y+(dai-row_bottom)+3);
								printf("LOP NAY CHUA CO SV!");
								//nhap lai masv
								clearPartOfScreen((start.x+(rong-col_right)/2)+6,start.y+3,(start.x+(rong-col_right)/2)+6+MAXMSV,start.y+3); vt_msv=0;
								clearPartOfScreen(start.x+13,start.y+3,start.x+13+MAXML,start.y+3); vt_ml=0;
								goto MALOP;
							}else{
								char masv_tmp[MAXMSV]; strcpy(masv_tmp,maSv); masv_tmp[vt_msv]='\0';
								for(NODESINHVIEN p=dslop->lop[i]->dssinhvien;p!=NULL;p=p->next){
									if(stricmp(p->sinhvien.masv,masv_tmp)==0){
										clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
										//in sv ra
										gotoxy((start.x+(rong-col_right)/2)+6,start.y+3); printf("%s",p->sinhvien.masv);
										gotoxy(start.x+16,start.y+7); printf("%s",p->sinhvien.ho);
										gotoxy(start.x+16,start.y+8); printf("%s",p->sinhvien.ten);
										gotoxy(start.x+16,start.y+9); printf("%s",p->sinhvien.phai);
										gotoxy(start.x+16,start.y+10); printf("%s",p->sinhvien.password);
									}else{
										//tbao masv k dung
										gotoxy(start.x+10,start.y+(dai-row_bottom)+3);
										printf("KHONG TIM THAY MASV NAY! NHAP LAI MSV!");
										//nhap lai masv
										goto MASV;
									}
								}
							}
						}
					}//			
					
				}else{
					gotoxy((start.x+(rong-col_right)/2)+6+vt_msv,start.y+3);
				}
			}
		}
}
