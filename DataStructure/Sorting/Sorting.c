#include<stdio.h>


int main(){

    int arraySize=10;
    int arr[20]={1,3,4,5,6,7,9,12,15,18};
    int temp;

    for(int i=arraySize-1;i>=0;i--){
        int swapped=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swapped=1;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(swapped==0){
            printf("Already Sorted \n");
            break;
        }
    }


    for(int i=0;i<arraySize;i++){
        printf("%d ",arr[i]);
    }
}
