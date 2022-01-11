

#include <iostream>

using namespace std;

int linearSearch(int arr[],int arrSize,int item){
    int i;
    for(i=0;i<arrSize;i++){
            if(arr[i]==item){
                return i;
                break;
            }
        }
    if(i==arrSize){
            cout<<"Element Not Found";
        }
        
    return 0;
}

void deleteInArray(int arr[],int capacity,int arrSize,int ind){
    
    if(capacity>arrSize){
            for(int i=ind;i<arrSize;i++){
                    arr[i]=arr[i+1];
            }
        
        }
    }




void printArray(int arr[],int arrSize){
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[20]={6,9,13,15,18,23,29,34,56,78,89};
    int arrSize=11;
    int item,store;
    
    
    cout<<"Array is:";
    printArray(arr,arrSize);
    cout<<"\nEnter the item to delete ";
    cin>>item;
    
    store=linearSearch(arr,arrSize,item);
   
    deleteInArray(arr,20,arrSize,store);
    arrSize--;
    cout<<"\n";
    printArray(arr,arrSize);
   
    
    
    
    
}
