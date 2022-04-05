/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void initArray(int arr[],int arr2[],int arrSize1,int arrSize2){
    cout<<"Enter Set1 Elements";
    for(int i=0;i<arrSize1;i++){
        cin>>arr[i];
    }
    cout<<"Enter Set2 Elements";
    for(int i=0;i<arrSize2;i++){
        cin>>arr2[i];
    }
}


void setUnion(int set1[],int set2[],int arrSize1,int arrSize2,int union[]){
    int 
    for(int i=0;i<arrSize1;i++){
        union[i]=set1[i];
    }
    
    for(int i=arrSize1;i<arrSize2,i++){
        for(int j=0;j<arrSize1+i;j++){
            if(union[j]!=set2[i]){
                union
            }
        }
    }
}

int main()
{
    int arr1[10];
    int arr2[10];
    int unionSet[20];
    initArray(arr1,arr2,10,10,unionSet);
    
    
    
}
