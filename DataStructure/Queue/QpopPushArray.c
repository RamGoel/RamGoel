

#include <stdio.h>


int pushQ(int arr[],int rear,int elem){
    arr[rear]=elem;
    rear=rear+1;
    return rear;
}


int popQ(int arr[],int rear){
    rear=rear-1;
    return rear;
}
int main()
{
    int arr[10]={};
    int qSize=10;
    int rear=0;
    int front =0;
    
    
    rear=pushQ(arr,rear,23);
    rear=pushQ(arr,rear,96);
    rear=pushQ(arr,rear,42);
    
    for(int i=0;i<rear;i++){
        printf("%d ",arr[i]);
    }
    
    rear=popQ(arr,rear);
    printf("\n");
    
    for(int i=0;i<rear;i++){
        printf("%d ",arr[i]);
    }
    
    
}
