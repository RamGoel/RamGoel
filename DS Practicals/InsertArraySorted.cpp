#include<iostream>

using namespace std;

void printArray(int arr[],int arraySize){
    for(int i=0;i<arraySize;i++){
        cout<<arr[i]<<" ";
    }
}

void InsertArraySorted(int arr[],int arraySize,int capacity,int item)
{

      if(arraySize<capacity){
          int i;
          for(i=arraySize;i>0;i--){
              
              if(arr[i-1]<item){
                arr[i]=item;
                break;
              }
              arr[i]=arr[i-1];
          }
      }
}

int main ()
{

  int arr[15]={2,25,32,48,67,78,89,123,210};
  int arraySize=9;
  

  printArray(arr,arraySize);

    cout<<"\n";
  InsertArraySorted(arr,arraySize,15,444);
  arraySize++;
 
  
 printArray(arr,arraySize);
}
