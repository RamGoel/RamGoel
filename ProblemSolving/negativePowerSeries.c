

#include <stdio.h>

int main()
{
    int sign=-1;
    int sum=0;
    int num;
    int j=1;
    int num1;
    int term=1;
    
    printf("How many Times : ");
    scanf("%d",&num);
    
    printf("Value of X : ");
    scanf("%d",&num1);
    
    
    
    for(int i=0;i<num;i++){
        sign=sign*-1;
        term=term*num1;
        sum=sum+sign*term;
    }
    
    printf("Sum of Negative Power Series is %d",sum);
    
}
