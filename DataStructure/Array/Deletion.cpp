

#include <iostream>

using namespace std;

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int Delete(int arr[], int index, int size){
    
    for(int i=index;i<=size;i++){
        arr[i]=arr[i+1];
    }
    return 1;
}




int main()
{
    int size=10, element=123, index=7, capacity=100;
    
    int arr[100]={23,22,34,45,78,87,67,98,56,66};
    
    
    display(arr,size);
    
    Delete(arr,index,size);
    size-=1;
    display(arr,size);
}
