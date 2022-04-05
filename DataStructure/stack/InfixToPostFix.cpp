

//Program for PostFix Evaluation by Ram Goel (ig:ramgoel_)

#include <iostream>

using namespace std;


char popStack(char arr[],int stackTop){
    char val=arr[stackTop];
    return val;
}

char pushStack(char arr[],int stackTop,char item){
    stackTop=stackTop+1;
    arr[stackTop]=item;

    return stackTop;
}

int checkEmpty(int stackTop){
    if(stackTop==-1){
        return 1;
    }

    return 0;
}

void PostFixConvert(char arr[],int stackTop,char expArray[],int expSize){

    for(int i=0;i<expSize;i++){
        int value=expArray[i]-'0';

        if(value>=0){
            cout<<value;
        }else if(expArray[i]=='(' || expArray[i]=='*' ||expArray[i]=='/'){
            stackTop=pushStack(arr,stackTop,expArray[i]);
        }else if(expArray[i]=='-' || expArray[i]=='+'){

            if(checkEmpty(stackTop) || arr[stackTop]=='('){
               stackTop=pushStack(arr,stackTop,expArray[i]);
            }else if(arr[stackTop]=='*' || arr[stackTop]=='/'){
                cout<<popStack(arr,stackTop);
                stackTop=stackTop-1;
                stackTop=pushStack(arr,stackTop,expArray[i]);
            }
        }else if(expArray[i]==')'){
            while(arr[stackTop]!='('){
                cout<<popStack(arr,stackTop);
                stackTop=stackTop-1;
            }
            popStack(arr,stackTop);
            stackTop--;

        }
    }




    while(stackTop>-1){
        cout<<popStack(arr,stackTop);
        stackTop--;

    }
}


int main(){


    //Stack initialization
    char arr[10];
    int stackTop=-1;

    //PostFix Expression Array
    char expArray[20]={'(','5','+','3',')','/','(','6','+','7',')'};


    //Printing the Answer
    cout<<"Infix Expression is {'(','5','+','3',')'} and "<<"\n";
    cout<<"PostFix Conversion is: ";


    //Calling Evaluation Function
    PostFixConvert(arr,stackTop,expArray,11);











}
