#include <iostream>

using namespace std;



char convertHexa(int num){
    char arrHexa[10]={'A','B','C','D','E','F'};
    
    if(num>9){
        int ref=num-9;
        return arrHexa[ref-1];
    }else{
        return num;
    }
}
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

    if(arr[stackTop]>9){
        
        cout<<convertHexa(arr[stackTop]);
    }else{
        cout<<arr[stackTop];
    }
    stackTop=stackTop-1;
    return stackTop;
}

int main()
{
    int val=987;
    int binaryArray[10];
    int ref=0,stackTop=-1,stackSize=10;
    
    
    while(val>0){
        ref=val%16;
        stackTop=pushStack(binaryArray,ref,stackTop,stackSize);
        val=val/16;
    }
    
    while(stackTop>-1){
        stackTop=popStack(binaryArray,stackTop);
        
    }




}
