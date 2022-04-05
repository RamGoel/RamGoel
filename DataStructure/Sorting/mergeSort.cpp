/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void mergeArr(int arr[],int beg,int mid,int end){
        
        int n1=mid-beg+1;
        int n2=end-mid;
        
        int a[n1];
        int b[n2];
        
        
        for(int i=0;i<n1;i++){
            a[i]=arr[beg+i];
        }
        
        for(int i=0;i<n2;i++){
            b[i]=arr[mid+i+1];
        }
        
        int i=0;
        int j=0;
        int k=beg;
        
        
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                arr[k]=a[i];
                k++;
                i++;
            }else{
                arr[k]=b[j];
                k++;
                j++;
            }
        }
        
        while(i<n1){
            arr[k]=a[i];
                k++;
                i++;
        }
        
        while(j<n2){
            arr[k]=b[j];
                k++;
                j++;
        }
}

void mergeSort(int arr[],int beg,int end){
    if(beg<end){
        int mid=(beg+end)/2;
        
        mergeSort(arr,beg,mid);
        mergeSort(arr,mid+1,end);
        
        mergeArr(arr,beg,mid,end);
    }
}

int main()
{
    int arr[]={2,3,1,56,23,43,12,14,19};
     
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    
    mergeSort(arr,0,9);
    cout<<endl;
    
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}
