#include<iostream>

using namespace std;

void printOneDArray(int arr[],int arraySize){
    
    for(int i=0;i<arraySize;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    int arr[10]={10,20,25,12,18,29,45,67,89};
    int arraySize=9;
    
    
    printOneDArray(arr,arraySize);
}