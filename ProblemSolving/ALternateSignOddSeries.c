/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sign=-1;
    int sum=0;
    int num;
    int j=1;
    int num1;
    
    printf("How many Values : ");
    scanf("%d",&num);
    
    
    for(int i=0;i<num;i++){
        sign=sign*-1;
        sum=sum+sign*j;
        j=j+2;
    }
    
    
    printf("Sum of Alternate Sign Odd series is %d",sum);
}
