

#include <iostream>

using namespace std;

void missingElem(int arr[],int arrSize){
    int start=arr[0];
    int end=arr[arrSize-1];
    int flag=0;
    
    for(int i=start;i<=end;i++){
        flag=0;
        for(int j=0;j<arrSize;j++){
            if(i==arr[j]){
                flag=1;
            }
        }
        if(flag==0){
            cout<<i<<" ";
        }
    }
}
int main()
{
    cout<<"Finding Missing Elements:\n";
    int arrSize;
    cout<<"Enter Array Size: ";
    cin>>arrSize;
    
    int arr[arrSize];
    
    cout<<"Enter Sorted Array Elements:";
    for(int i=0;i<arrSize;i++){
        cin>>arr[i];
    }
    
    cout<<"Missing :";
    missingElem(arr,arrSize);
}
