



#include<stdio.h>


void main(){

    int value,greatestDigit=0,rem;

    printf("Enter a Number to find its largest digit : "); //getting Number Input
    scanf("%d",&value);

    while(value!=0){
        rem=value%10; //getting remainder
        value=value/10; //decreasing value

        if(rem>greatestDigit){
            greatestDigit=rem; //storing and replacing the greatest digit.
        }
    }

    printf("%d",greatestDigit);





}

