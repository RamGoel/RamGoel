
#include<stdio.h>


void main(){
    int num; //number input
    int rev=0; //a variable which store reverse value
    int rem; //a reference variable

    printf("Enter a Number to Reverse : ");
    scanf("%d",&num); //taking number input

    while(num!=0){ //running a loop until number becomes 0
        rem=num%10; //getting last digit by getting mod by 10.
        rev=rev*10+rem;  //calculating reverse value
        num=num/10;  //decreasing number by 10.
    }

    printf("%d",rev); //Printing the reverse value




}

