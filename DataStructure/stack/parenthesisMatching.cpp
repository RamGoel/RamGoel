#include <iostream>

using namespace std;

int pushStack(char arr[],char val,int stackTop,int stackSize){
    if(stackTop>=stackSize-1){

        return -1;
    }else{
        arr[stackTop+1]=val;
        stackTop=stackTop+1;
        return stackTop;
    }
}

int popStack(char arr[],int stackTop){

    if(stackTop>-1){
        stackTop=stackTop-1;
        return stackTop;
    }

    return -1;
}

int main()
{
    char mainStack[10];;
    char refStack[10]={};
    int refStackTop=-1;
    int stackSize=7;
    int flag=0;
    char value;
    
    for(int i=0;i<stackSize;i++){
        cin>>value;
        pushStack(mainStack,ci;
    }



    for(int i=0;i<=stackSize;i++){
        char a=mainStack[i];
        if(a=='('){

                refStackTop=pushStack(refStack,a,refStackTop,10);

        }else if(a==')'){
                refStackTop=popStack(refStack,refStackTop);

        }

        if(i==stackSize && refStackTop==-1){
            cout<<"Balanced";
        }else if(i==stackSize && refStackTop!=-1) {
            cout<<"Not Balanced";
        }
    }




}
