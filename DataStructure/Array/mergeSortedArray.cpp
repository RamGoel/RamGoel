

#include <iostream>

using namespace std;

int mergeSortedArray(int arr1[],int arr[2],int arrSize1,int arrSize2,int refArr[]){
    
    for(int i=0;i<arrSize1;i++){
        refArr[i]=arr1[i];
    }
    
    for(int i=0;i<arrSize2;i++){
        for(int j=0;j<arrSize1;i++){
            if
        }
    }
}



void printArray(int arr[],int arrSize){
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr1[20]={10,12,15,20,25};
    int arr2[20]={13,16,19,29,32};
    int addedArray[40];
    int arrSize1=5;
    int arrSize2=5;
    
    
    mergeSortedArray(arr1,arr2,arrSize1,arrSize2,addedArray);
    
    
    printArray(addedArray,arrSize1+arrSize2);
    
    
}
