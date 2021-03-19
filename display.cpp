#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<conio.h>
#include"setconsole.cpp"


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
                        printf("%s\n","|                         3.Quan ly cau hoi thi.                                    |");
                        gotoxy(menux,20+6);
                        printf("%s\n","|                                                                                   |");
                        gotoxy(menux,20+7);
                        printf("%s\n","_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
                        gotoxy(70+1,20+9);
                        printf("%s","Lua chon: ");
                        gotoxy(70+72,20+9);
                        printf("%s","ESC:Dieu Khien");
                        gotoxy(70+75,20+10);
                        printf("%s","ESC:Thoat");
                        gotoxy(70+72,20+11);
                        printf("%s","INSERT:Ghi");
                       
     
}
void menuDisplayQuanLyLop() {
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
int menuQuanLyLop() {
    
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
                                                      printf("%d",choise);
                                                      switch(choise) {
                                                                           case 1:{
                                                                                    //Xu ly Them Lop  
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
     
int menu() { 
 
   
MENU:    int choise = -1;
         menuDisplay();
         gotoxy(70+10,20+9);               
                        
 Wait:                       if(kbhit()){
                                    	char c = getch();
                                    	if(c==27){return 1;}
                                    	if(c==-32){                    //nhan insert
                                                      gotoxy(70+10,20+9);
                                                      fflush(stdin);
                                                      scanf("%d",&choise);fflush(stdin); 
                                                      switch(choise) {
                                                                           case 1:{
                                                                                      menuQuanLyLop(dslop);
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
    
