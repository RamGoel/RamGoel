

#include <stdio.h>



int main()
{
    int facto=1;
    int sum=0;
    int num;

    
    printf("How many Times : ");
    scanf("%d",&num);
    

    
    
    
    for(int i=1;i<=num;i++){
        facto=facto*i;
        sum=sum+facto;
    }
    
    printf("Sum of Factorial Series is %d",sum);
    
}
