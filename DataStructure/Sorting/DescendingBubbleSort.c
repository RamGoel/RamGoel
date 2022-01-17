#include<stdio.h>


int main(){

    int arraySize=10;
    int arr[20]={1,3,4,5,6,7,9,12,15,18};
    int temp;

    for(int i=0;i<arraySize;i++){
        int pivot1=arr[i],pivot2;

        for(int j=i;j<arraySize;j++){
            if(arr[j]<pivot){
                pivot2=j;
                continue;
            }
        }

    }

    for(int i=0;i<arraySize;i++){
        printf("%d ",arr[i]);
    }
}
