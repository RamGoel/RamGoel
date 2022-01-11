
#include<stdio.h>


void main(){
    int num;

    printf("Enter the number to print Table : ");
    scanf("%d",&num);

    for(int i=1;i<11;i++){

        printf("%d * %d =%d",num,i,num*i);
        printf("\n");

}


}
