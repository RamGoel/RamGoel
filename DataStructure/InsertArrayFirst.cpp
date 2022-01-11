#include<iostream>

using namespace std;

void printArray(int arr[],int arraySize){
    for(int i=0;i<arraySize;i++){
        cout<<arr[i]<<" ";
    }
}

void InsertArrayFirst(int arr[],int arraySize,int capacity,int item)
{

      if(arraySize<capacity){
          for(int i=arraySize+1;i>=0;i--){
              arr[i+1]=arr[i];
          }
          arr[0]=item;
          
      }
      
  
}

int main ()
{

  int arr[15]={21,23,34,45,22,89,67,86,31};
  int arraySize=9;
  

  printArray(arr,arraySize);

    cout<<"\n";
  InsertArrayFirst(arr,arraySize,15,212);
  arraySize++;
 
  
 printArray(arr,arraySize);
}
