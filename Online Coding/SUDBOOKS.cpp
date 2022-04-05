#include <iostream>
using namespace std;


int popStack(int arr[],int stackTop){
    
        cout<<arr[stackTop];
        stackTop=stackTop-1;
        return stackTop;
    
    
}


int isEmpty(int stackTop){
    if(stackTop!=-1){
        return 1;
    }else{
        return 0;
    }
}


int pushStack(int arr[],int stackTop,int value){
    stackTop=stackTop+1;
    arr[stackTop]=value;
    return stackTop;
}
int main() {
	// your code goes here
	
	int Queries; 
	int stackArr[30];
	int stackTop=-1;
	
	
	cin>>Queries;
	
	while(Queries--){
	    int queryType,queryValue;
	    cin>>queryType;
	    
	    if(queryType!=-1){
	        cin>>queryValue;
	        
	        stackTop=pushStack(stackArr,stackTop,queryValue);
	    }else{
	        
	        if(isEmpty(stackTop)){
	            
	            stackTop=popStack(stackArr,stackTop);
	        }else{
	            cout<<"kuchbhi?";
	        }
	    }

	}
	return 0;
}
