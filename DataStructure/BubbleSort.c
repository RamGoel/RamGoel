#include<stdio.h>


int main(){

    int arraySize=10;
    int arr[20]={1,3,4,5,6,7,9,12,15,18};
    int temp;

    for(int i=0;i<arraySize;i++){
        int swapped=0,count;
        count++;
        for(int j=arraySize-1;j>i;j--){
            if(arr[j]>arr[j-1]){
                swapped=1;
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
        if(swapped==0 && count==1){
            printf("Already Sorted \n");
            break;
        }
    }


    for(int i=0;i<arraySize;i++){
        printf("%d ",arr[i]);
    }
}
