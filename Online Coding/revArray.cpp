/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void initArray(int arr[],int arrSize){
    cout<<"Enter Array Elements";
    for(int i=0;i<arrSize;i++){
        cin>>arr[i];
    }
    
}


void revArray(int arr1[],int arrSize,int refArray[]){
    int i=0;
    for(int j=arrSize-1;j>=0;j--){
        refArray[i]=arr1[j];
        i++;
    }
}

void printArray(int arr[],int arrSize){
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    
    int arrSize;
    cout<<"Enter Array Size: ";
    cin>>arrSize;
    
    int arr1[arrSize];
    initArray(arr1,arrSize);
    cout<<"Previous Array: ";
    printArray(arr1,arrSize);
    cout<<"\n";
    
    
    cout<<"Reverse Array:";
    int refArray[arrSize];
    revArray(arr1,arrSize,refArray);
    
    printArray(refArray,arrSize);
    
    
    
    
}
