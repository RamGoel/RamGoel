#include<iostream>

using namespace std;

void printArray(int arr[],int arraySize){
    for(int i=0;i<arraySize;i++){
        cout<<arr[i]<<" ";
    }
}

void InsertArrayLast(int arr[],int arraySize,int capacity,int item)
{

      if(arraySize<capacity){
          arr[arraySize]=item;
      }
  
}

int main ()
{

  int arr[15]={21,23,34,45,22,89,67,86,31};
  int arraySize=9;
  



  InsertArrayLast(arr,arraySize,15,212);
  arraySize++;
  InsertArrayLast(arr,arraySize,15,2224);
  arraySize++;
  InsertArrayLast(arr,arraySize,15,898);
  arraySize++;
  
  printArray(arr,arraySize);
}
