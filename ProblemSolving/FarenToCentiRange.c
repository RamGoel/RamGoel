#include<stdio.h>


void main(){

    int rangeStart,rangeEnd,step;

    float centi;

    printf("Enter start Range ");
    scanf("%d",&rangeStart);
    printf("Enter end Range ");
    scanf("%d",&rangeEnd);
    printf("Enter difference between ranges ");
    scanf("%d",&step);




    for(int i=rangeStart;i<=rangeEnd;i=i+step){
        centi=(i-32)*0.5556; //formula for to centigrade
        printf("Value of %d in Centigrade is : %f\n",i,centi);
    }



}

