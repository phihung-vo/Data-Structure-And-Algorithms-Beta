#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


void backSpace(int x,int y){
     gotoxy(x,y);
     printf("%s"," ");
     
     }
     
bool checkIfAnswerIsTrueCharacter(char c) {
	if((int)c ==97 || (int)c ==98 || (int)c ==99 || (int)c ==100 ||
		(int)c ==65 || (int)c ==66 || (int)c ==67 || (int)c ==68  )return true;
	return false;     
}

void del(char *a, int vitri){
    int n = strlen(a);
    for (int i=vitri; i<n; i++){
        a[i] = a[i + 1];
    }
    n--;
}

void delspace(char *a){
    int n=strlen(a);
    for (int i = 0; i < n; i++){
        if (a[0] == 32){
           del(a, 0);
            n--;
        }
        if (a[n-1] == 32){
            del(a, n-1);
            n--;
        }
        if (a[i] == 32 && a[i + 1] == 32){
            del(a, i);
            i--;
            n--;
        }
    }
}

void uppercase(char *a){
	for(int i=0; i< strlen(a); i++){
		if(a[i]>=97&&a[i]<=122){
			a[i]=a[i]-32;
		}
	}
}

char upper_an_char(char a){
	if(a>=97&&a<=122) {a=(int)a-32; return a;}	
	return a;
}

void upper_first_char(char *a){
	if(a[0]>=97&&a[0]<=122){
		a[0]=a[0]-32;
	}
}

void uppername(char *a){ //vO pHi hung -> Vo Phi Hung
	char *tmp =a;        
    for(int i=0;i<strlen(a);i++){ 
		if(i==0){
			if (tmp[0]>97&&tmp[0]<122){
	            tmp[0]=tmp[0]-32;
	            a[0]=tmp[0];
	        } 
		}else{
			if (tmp[i] == 32){
	            if(tmp[i+1]>97&&tmp[i+1]<122){
	            	tmp[i+1]=tmp[i+1]-32;
	            	a[i+1]=tmp[i+1];
				}
	        }else{
	        	if (tmp[i]>65&&tmp[i]<90){
		            tmp[i]=tmp[i]+32;
		            a[i]=tmp[i];
	       		}	
			}
		}
	}
}

int showStringInLocation(char nd[1000],int x,int y,int end){
    int i=0,j=0,k=0;
	bool flag = false;
	while(i<strlen(nd)){
		if(flag ==false){
	       gotoxy(x+j,y);
	       printf("%c",nd[i]);
	       j++;
	       i++;
		}
		if(flag==true){
		   gotoxy(x+j,y+k);
	       printf("%c",nd[i]);
	       j++;
	       i++;
	                   
	    }
	    if(j==end){
	       j = 0;
	       k++;
	       gotoxy(x+j,y+k);
	       printf("%c",nd[i]);
	       i++;
	       flag = true;
	    }
	}
	return y+k;    
}


/*====================================*/     
 
