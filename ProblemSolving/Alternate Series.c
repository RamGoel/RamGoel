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
    int num1;
    
    printf("How many Values : ");
    scanf("%d",&num);
    
    
    printf("Enter Values :");
    for(int i=0;i<num;i++){
        scanf("%d",&num1);
        sign=sign*-1;
        sum=sum+sign*num1;
    }
    
    
    printf("Sum of Alternate series is %d",sum);
}
