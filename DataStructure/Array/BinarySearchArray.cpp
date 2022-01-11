

#include <iostream>

using namespace std;

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int BSearch(int arr[],int size,int element){
    int low,mid,high;
    
    low=0;
    high=size-1;
    
    
    while(low<=high){
        mid=(low+high)/2;
        
        if(arr[mid]==element){
            return mid;
            
        }
        
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    
    return -1;
}



int main()
{
    int size=8, element=87, capacity=100;
    
    int arr[100]={23,22,34,45,55,78,87,98};
    
    
    display(arr,size);
    
    
    int SearchIndex=BSearch(arr,size,element);
    
    
    cout<<"Element found at "<<SearchIndex;
}
