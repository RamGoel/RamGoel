#include<stdio.h>


int main(){

    int arraySize=10;
    int arr[20]={1,3,4,5,6,7,9,12,15,18};
    int temp;


    //bubble sort
    for(int i=0;i<arraySize;i++){
        int pivot=i;
        
        for(int j=0;j<arraySize;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }

    for(int i=0;i<arraySize;i++){
        printf("%d ",arr[i]);
    }
}
