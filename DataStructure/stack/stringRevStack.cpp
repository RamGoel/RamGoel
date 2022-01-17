#include <iostream>

using namespace std;

int pushStack(char arr[],char val,int stackTop,int stackSize){
    if(stackTop>=stackSize-1){
        return 0;
    }else{
        arr[stackTop+1]=val;
        stackTop=stackTop+1;
        return stackTop;
    }
}

void popStack(char arr[],int stackTop){

    while(stackTop>-1){
        cout<<arr[stackTop]<<" ";
        stackTop=stackTop-1;
    }
}

int main()
{
    char arr[10]={'a','n','i','m','e'};
    char revString[10]={};
    int stackTop=-1;


    for(int i=4;i>=0;i--){
        char a=arr[i];
        stackTop=pushStack(revString,a,stackTop,10);
    }

    for(int j=0;j<5;j++){
        cout<<revString[j]<<" ";
    }
}
