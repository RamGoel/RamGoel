#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T,arrSize,arr[30],Key;
	
    //No.of Test Cases
	cin>>T;
	
	//While TestCases are Not 0(Return False on 0 and Stops)
	while(T--){
	    
        //Getting Inputs for every TestCases
	    cin>>arrSize;
	    
	    for(int i=0;i<arrSize;i++){

	        cin>>arr[i];
	    }
	    
	    cin>>Key;
	    
	    
	    //Bubble Sort the Array
	    for(int i=0;i<arrSize;i++){
            for(int j=0;j<arrSize-i-1;j++){
              if(arr[j]>arr[j+1]){
	            int ref=arr[j];
	            arr[j]=arr[j+1];
	            arr[j+1]=ref;
	           }
            }
       
        }
        
        
        //Linear Search the Key Item
        for(int i=0;i<arrSize;i++){
            if(arr[i]==Key){
                cout<<i;
                break;
            }
        }
	
	    
	}
	
	return 0;

}
