#include<stdio.h>
 
int main(){
 
	int a;
	
	
 
	scanf("%d",&a);


 
    if(a%4!=0){
        printf("No Leap Year");
    }else{
        if(a%100!=0)
            printf("Leap Year");
        else{
            printf("No Leap Year");
        }
    }
    
    return 0;
	
}
