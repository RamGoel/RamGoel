/******************************************************************************

                              Ram Goel
               Program to do linearSearch on Array

*******************************************************************************/

#include <iostream>

using namespace std;


int linearSearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
            break;
        }
    }
    return -1;
}

int main()
{
    int arr[20]={2,5,132,13,1,33,11334,342};
    
    int location=linearSearch(arr,8,1); //Change 1 to a number you want to search
    
    
    if(location==-1){
        cout<<"Element Not Found";
    }else{
        cout<<"Element found at index "<<location;
    }
    
    
    
    
}
