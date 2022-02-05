#include <iostream>

using namespace std;

int pushStack(int arr[],int val,int stackTop,int stackSize){
    if(stackTop>=stackSize-1){

        return -1;
    }else{
        arr[stackTop+1]=val;
        stackTop=stackTop+1;
        return stackTop;
    }
}

int popStack(int arr[],int stackTop){

    
    cout<<arr[stackTop];
    stackTop=stackTop-1;
    return stackTop;
}

int main()
{
    int val=22;
    int binaryArray[10];
    int ref=0,stackTop=-1,stackSize=10;
    
    while(val>0){
        ref=val%2;
        stackTop=pushStack(binaryArray,ref,stackTop,stackSize);
        val=val/2;
    }
    
    while(stackTop>-1){
        stackTop=popStack(binaryArray,stackTop);
        
    }




}
