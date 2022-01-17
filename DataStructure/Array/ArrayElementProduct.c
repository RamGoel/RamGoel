



#include<stdio.h>


void main(){

    int nums[100],size,product=1;


    printf("***** Program to Multiply All Given Numbers ****\n");
    printf("How many Numbers to Product : ");
    scanf("%d",&size);

    printf("Enter Numbers : ");
    for(int i=0;i<size;i++){
        scanf("%d",&nums[i]);
    }


    for(int i=1;i<size;i++){
        product=product*nums[i];

    }

    printf("Multiplication of all Numbers is %d",product);





}

