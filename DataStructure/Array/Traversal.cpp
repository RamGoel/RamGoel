/******************************************************************************
                              Cpp Data Structures and Algorithms
                                Example of Array Creation in Cpp
*******************************************************************************/

#include <iostream>

using namespace std;


void createArray(int arr[],int arrSize){
    for(int i =0;i<arrSize;i++){
        cin>>arr[i];
    }
    
    
}
void printArray(int arr[],int arrSize){
    
    //Array Traversal (Visiting all Elements or Printing all Elements)
    for(int i=0;i<arrSize;i++){
        cout<<i+1<<"th element of Array is "<<arr[i]<<endl;
    }
    
}

int main()
{
    
    
    int arrSize;
    
    cout<<"Enter Array Size:";
    cin>>arrSize;
    
    //Declaration and Initialization of an array. 
    int arr[arrSize];
    
    cout<<"Enter Array Elements: ";
    createArray(arr,arrSize);
    
    //Calling the Function
    printArray(arr,arrSize);
    
    
    
    
   
}
