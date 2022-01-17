#include <iostream>

using namespace std;


void traverseStack(int arr[],int stackTop){
    for(int i=0;i<stackTop;i++){
        cout<<arr[i]<<" ";
    }
}

int peekStack(int arr[],int stackTop){
    return stackTop;
}

int popStack(int arr[],int stackTop){
    cout<<arr[stackTop];
    stackTop=stackTop-1;
    return stackTop;
}

int pushStack(int arr[],int stackTop,int item){
    arr[stackTop]=item;
    stackTop=stackTop+1;
    
    return stackTop;
}



int checkEmpty(int arr[],int stackTop){
    if(stackTop==0){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    
    
    //Stack initialization
    int arr[10];
    int maxSize=10;
    int stackTop=-1;
    int item;
    cout<<"A Stack is Created, it is empty\n";
    
    
    int choice=1;
    cout<<"Enter 1 for POP, 2 for PUSH, 3 to check empty or Not, 4 to print Stack:";
    cin>>choice;
    
    if(choice==1){
        //pop Stack
        item=popStack(arr,stackTop);
        cout<<item<<" is popped";
    
    }else if(choice==2){
        
        //Push in Stack
        cout<<"Enter Element to Add in stack";
        cin>>item;
        pushStack(arr,stackTop,item);
    }else if(choice==3){
        //checkEmpty
        if(checkEmpty(arr,stackTop)==0){
            cout<<"\nStack is empty";
        }else{
            cout<<"\nStack is not empty";}
    
        
    }else if(choice==4){
        traverseStack(arr,stackTop);
    }else{
        cout<<"Invalid Choic";
    }
    
        
    
        
        
}
