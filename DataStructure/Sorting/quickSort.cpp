#include<iostream>


using namespace std;

int pivot(int arr[],int beg,int end){
    int pivot=arr[end];
    
    int i=beg-1;
    
    for(int j=beg;j<end;j++){
        if(arr[j]<pivot){
            i++;
            
            int ref=arr[j];
            arr[j]=arr[i];
            arr[i]=ref;
        }
    }
    
    int ref=arr[i+1];
    arr[i+1]=arr[end];
    arr[end]=ref;
    
    return i+1;
}
void quickSort(int arr[],int beg,int end){
    if(beg<end){
        
        int pi=pivot(arr,beg,end);
        
        quickSort(arr,beg,pi-1);
        quickSort(arr,pi+1,end);
        
        
    }
}

int main(){
    
    int arr[10]={12,13,1,2,5,3,4,9,7,8};
    
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    quickSort(arr,0,9);
    
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}
