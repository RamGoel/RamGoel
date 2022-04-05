

//Program for PostFix Evaluation by Ram Goel (ig:ramgoel_)

#include <iostream>

using namespace std;


int popStack(int arr[],int stackTop){
    int val=arr[stackTop];
    stackTop=stackTop-1;
    return val;
}

int pushStack(int arr[],int stackTop,int item){
    stackTop=stackTop+1;
    arr[stackTop]=item;
    
    return stackTop;
}



int checkEmpty(int arr[],int stackTop){
    if(stackTop==0){
        return 0;
    }else{
        return 1;
    }
}


int calPostFix(int arr[],int stackTop,char expArray[],int expSize){
    for(int i=0;i<expSize;i++){
        
        int value=expArray[i]-'0';
        
        if(value>=0 && value<=1000){
            stackTop=pushStack(arr,stackTop,value);

            
        }else if(expArray[i]=='+'){
            int val1=popStack(arr,stackTop);
            stackTop=stackTop-1;
            int val2=popStack(arr,stackTop);
            stackTop=stackTop-1;

            stackTop=pushStack(arr,stackTop,val1+val2);
            
        }else if(expArray[i]=='-'){
            int val1=popStack(arr,stackTop);
            stackTop=stackTop-1;
            int val2=popStack(arr,stackTop);
            stackTop=stackTop-1;
            
            stackTop=pushStack(arr,stackTop,val1-val2);
            
        }else if(expArray[i]=='*'){
            int val1=popStack(arr,stackTop);
            stackTop=stackTop-1;
            int val2=popStack(arr,stackTop);
            stackTop=stackTop-1;
            
            stackTop=pushStack(arr,stackTop,val1*val2);
            
        }else if(expArray[i]=='/'){
            int val1=popStack(arr,stackTop);
            stackTop=stackTop-1;
            int val2=popStack(arr,stackTop);
            stackTop=stackTop-1;
            
            cout<<val1/val2;
            stackTop=pushStack(arr,stackTop,val1/val2);
            
        }
    }
    
    return popStack(arr,stackTop);
    
}


int main(){
    
    
    //Stack initialization
    int arr[10];
    int stackTop=-1;
    
    //PostFix Expression Array
    char expArray[20]={'7','5','3','*','-'};
    
    
    //Calling Evaluation Function
    int calc=calPostFix(arr,stackTop,expArray,5);
    
    
    //Printing the Answer
    cout<<"Expression is {'7','5','3','*','-'} and "<<"\n";
    cout<<"Evaluated Answer is: "<<calc;
    
    
    
    
        
    
        
        
}
