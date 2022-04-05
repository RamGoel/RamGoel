#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int Test;
	cin>>Test;
	
	while(Test--){
	    int size;
	    cin>>size;
	    
	    int arr1[size];
	    
	    for(int i=0;i<size;i++){
	        cin>>arr1[i];
	    }
	    
	    int arr2[size];
	    
	    for(int i=0;i<size;i++){
	        cin>>arr2[i];
	    }
	    
	  
	    for(int i=0;i<size;i++){
	        int num=arr1[i]*10+arr2[i];
	        cout<<num<<" ";
	    }
	}
	return 0;
}
