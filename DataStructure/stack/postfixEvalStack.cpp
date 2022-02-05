#include <iostream>

using namespace std;

int evaluate(int a,int b, char oper){
    if(oper=='+'){
        return a+b;
    }else if(oper=='-'){
        return a-b;
    }else if(oper=='*'){
        return a*b;
    }else if(oper=='/'){
        return a/b;
    }else{
        return -1;
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
    int ref=0;
    if(stackTop>-1){
        ref=arr[stackTop];
        stackTop=stackTop-1;
        
    }
    return ref;
}

int main()
{
    char arr[10]={'1','9','3','+'};
    int stackTop1=3,stackSize1=10;
    char Symb;
    int operStack[10];
    int stackTop2=-1,stackSize2=10;
    int i=0;
    
    while(i<stackTop1){
        Symb=arr[i];
        if(int(Symb)>47 && int(Symb)<58){
            stackTop2=pushStack(operStack,Symb-'0',stackTop2,stackSize2);
            
        }else{
            while(stackTop2>-1){
                
            int a=popStack(operStack,stackTop2);
            stackTop2=stackTop2-1;
           
            int b=popStack(operStack,stackTop2);
            stackTop2=stackTop2-1;

            int eval=evaluate(a,b,Symb);

            stackTop2=pushStack(operStack,eval,stackTop2,stackSize2);
            }
        }
        
        
        i=i+1;
    }
    
    int result=popStack(operStack,stackTop2);
    cout<<"Answer is :"<<result;
    


}
