

#include <iostream>

using namespace std;

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int Insert(int arr[], int index, int element, int size, int capacity){
    if(size>=capacity){
        return -1;
    }
    
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    
    return 1;
}




int main()
{
    int size=10, element=123, index=3, capacity=100;
    
    int arr[100]={23,22,34,45,78,87,67,98,56,66};
    
    
    display(arr,size);
    
    Insert(arr, index, element, size, capacity);
    
    size+=1;
    display(arr,size);
}
