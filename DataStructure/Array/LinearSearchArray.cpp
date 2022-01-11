

#include <iostream>

using namespace std;

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void linear(int arr[],int size, int element){
    
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            cout<< "element found at "<<i;
            
        }
        
        
    }
    
       
}





int main()
{
    int size=10, element=87, capacity=100;
    
    int arr[100]={23,22,34,45,78,87,67,98,56,66};
    
    
    display(arr,size);
    
    
    linear(arr,size,element);
    
}
