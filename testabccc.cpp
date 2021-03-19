#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<string.h>
#include"function.cpp"
#include"functionOfFile.cpp"



int inLopT(int tick, DSLOP *dslop,bool rig){
	int count =0; char c;
	int j=0; 
    int arrow = 0;
    int index;
check:	GdLop(); 
    
	int vitri=0; //chi dung lam tang them 1 hang trong
    if( ( (tick*20) - (dslop->n) ) > 20 ){	}
	else {
		clearPartOfScreen(xGd-23,yGd+5,xGd+38+10,yIn+5+vitri+40);
		//sap xep
		sapXepLop(dslop);
		//in trang
		for(int i=0;i<dslop->n;i++){
				if(i % 20 == 0) j ++;
			if(j == tick){
				if(arrow>count){
					
				}
				else {
				  if(count==arrow && rig==true){
		                  colorText(6);
						  gotoxy(xGd-23,yGd+5+vitri);
				        printf("%s",dslop->lop[i]->malop);
				        gotoxy(xGd-10,yGd+5+vitri);
					    printf("%s",dslop->lop[i]->tenlop);
					    gotoxy(xGd+38,yGd+5+vitri);
					    printf("%s",dslop->lop[i]->nienkhoa);
						vitri=vitri+2;
						count++;
		                arrow;
						whiteColor();				
					}
					else {
						gotoxy(xGd-23,yGd+5+vitri);
				        printf("%s",dslop->lop[i]->malop);
				        gotoxy(xGd-10,yGd+5+vitri);
					    printf("%s",dslop->lop[i]->tenlop);
					    gotoxy(xGd+38,yGd+5+vitri);
					    printf("%s",dslop->lop[i]->nienkhoa);
						vitri=vitri+2;
						count++;
					}
				}
			}
			if(count == 20){
				break;
			}
		}
	}

		
			if(rig==true){
				vitri = 0;
			W:	if(kbhit){
				   c= getch();
				 
					if(c==72 && arrow >0){
						arrow --;
						colorText(7);
						  gotoxy(xGd-23,yGd+5+vitri);
				        printf("%s",dslop->lop[0]->malop);
				        gotoxy(xGd-10,yGd+5+vitri);
					    printf("%s",dslop->lop[0]->tenlop);
					    gotoxy(xGd+38,yGd+5+vitri);
					    printf("%s",dslop->lop[0]->nienkhoa);
						whiteColor();
						//
						vitri -=2;
						colorText(6);
						  gotoxy(xGd-23,yGd+5+vitri);
				        printf("%s",dslop->lop[0]->malop);
				        gotoxy(xGd-10,yGd+5+vitri);
					    printf("%s",dslop->lop[0]->tenlop);
					    gotoxy(xGd+38,yGd+5+vitri);
					    printf("%s",dslop->lop[0]->nienkhoa);
						whiteColor();
					}
					if(c==80 && arrow<count-1){
						
						
						arrow ++;
						colorText(7);
						  gotoxy(xGd-23,yGd+5+vitri);
				        printf("%s",dslop->lop[0]->malop);
				        gotoxy(xGd-10,yGd+5+vitri);
					    printf("%s",dslop->lop[0]->tenlop);
					    gotoxy(xGd+38,yGd+5+vitri);
					    printf("%s",dslop->lop[0]->nienkhoa);
						whiteColor();
						//
						vitri +=2;
						colorText(6);
						  gotoxy(xGd-23,yGd+5+vitri);
				        printf("%s",dslop->lop[0]->malop);
				        gotoxy(xGd-10,yGd+5+vitri);
					    printf("%s",dslop->lop[0]->tenlop);
					    gotoxy(xGd+38,yGd+5+vitri);
					    printf("%s",dslop->lop[0]->nienkhoa);
						whiteColor();
					}
					if(c==75){
					    return -1;
						goto E;
					}
				}goto W;E: ;
			}
		
	
			return index;	

}



void Input_ClassT(DSLOP *dslop){
	system("cls");
    //goi ham in ds
    char c; int tick=1;	int stcthuc = dslop->n/20;
	int arrow = -1;
	bool rig = false;
	inLopT(tick,dslop,rig);
	arrow = 0;
	//dk ds
	if(Empty_L(dslop) == 1){	gotoxy(xGd+3,yGd+7);printf("DS rong!");	}
	if(Full_L(dslop) == 1) {	gotoxy(xIn+3,yIn+7);printf("DS full khong the them!");	
		while (true){
			do{
			  	c=getch();fflush(stdin);
			}while(c!=59 && c!=60 && c!=27);
			if ( c == 59) {//f1
	   			tick ++;
				if(tick<=inf1(stcthuc,dslop)){
					inLopT(tick,dslop,rig);
				}else{
					tick=tick-1;
					inLopT(tick,dslop,rig);
				}
			}
			if ( c == 60) {//f2
				tick --;if(tick == 0) tick = 1;
				inLopT(tick,dslop,rig);
			}
			if ( c == 27) {//esc
//				menuQuanLyLop(dslop);
			}
			
		}
	}
	else{
		while(true){
			gotoxy(xIn,8);
			printf("So luong lop hien co: %d",(dslop->n));
			gotoxy(xIn,9);
			printf("Ban co muon them lop khong (y/n): ");
			do{
			  	c=getch();fflush(stdin);
			}while(c!=89 && c!=121 && c!=78 && c!=110 && c!=59 && c!=60 && c!=75 && c!=77 && c!=80);
			if(c==89 || c==121){
				clearPartOfScreen(xIn,9,xIn+34,9);//xoa vung hoi
				nhapDSLopMoi(dslop);
				clearPartOfScreen(xIn,10,xIn+50,14);//xoa vung sau khi nhap xong
			}
			if(c==78 || c==110){
//				goto Esc;
			}
			if ( c == 59) {//f1
	   			tick ++;
				if(tick<=inf1(stcthuc,dslop)){
					inLopT(tick,dslop,rig);
				}else{
					tick=tick-1;
					inLopT(tick,dslop,rig);
				}
			}
			if ( c == 60) {//f2
				tick --;if(tick == 0) tick = 1;
				inLopT(tick,dslop,rig);
			}
			if(c==77){ //c = getch();fflush(stdin);
//				if(true){	//c = getch();fflush(stdin);
				    //qua phai
			   		
//						system("pause");
                        rig = true;
						inLopT(tick,dslop,rig);
						rig = false;
					
				
			
			
			
			}
				
		}
//		Esc : menuQuanLyLop(dslop);
	}
}


int main(){
	//khoi tao
       DSLOP dslop;
       DSMON dsmon;
       SINHVIEN sv;
       NODECAUHOI dscauhoi;
       loadDSMon(&dsmon);
		dslop.n=0;
		loaddsltam(&dslop);
     Input_ClassT(&dslop);
	}
