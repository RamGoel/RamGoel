/******************************************************************************

                              Ram Goel
               Program to do binarySearch on Array

*******************************************************************************/

#include <iostream>

using namespace std;


int binarySearch(int arr[],int low,int high, int key){
    
    
    
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            high=mid-1;
        }else if(arr[mid]<key){
            low=mid+1;
        }
    }
    return -1;
   
}

int main()
{
    int arr[20]={1,2,5,12,14,16,21,29,35,67};
    
    int location=binarySearch(arr,0,10,5); //Change 1 to a number you want to search
    
    
    if(location==-1){
        cout<<"Element Not Found";
    }else{
        cout<<"Element found at index "<<location;
    }
    
    
    
    
}
