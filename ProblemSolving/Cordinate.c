#include<stdio.h>
 
int main(){
 
	int x,y;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	if(x>0 && y>0){
	    printf("First");
	}else if(x<0 && y>0){
	    printf("Second");
	}else if(x<0 && y<0){
	    printf("Third");
	}else if(x>0 && y<0){
	    printf("fourth");
	}else{
	    printf("None");
	}
	
}
