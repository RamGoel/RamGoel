#include<stdio.h>
 
int main(){
 
	int a,b,c;
	
	
 
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a>b){
	    if(a>c){
	        printf("A is greatest");
	    }
	}
	else if(b>c){
	    if(b>a){
	        printf("B is Largest");
	    }
	}
	else{
	    printf("C is Largest");
	}
	


 
    return 0;
	
}
