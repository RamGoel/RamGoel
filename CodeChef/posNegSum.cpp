#include <iostream>
using namespace std;

int main() {
	int T;
	cout<<"No. of Testcases:";
	cin>>T;
	
	int size;
	cout<<"Size of Array:";
	cin>>size;
	int arr[size];
	
	cout<<"Elements of Array:";
	for(int i=0;i<size;i++){
	    cin>>arr[i];
	}
	
	for(int i=0;i<size;i++){
	    for(int j=0;j<size;j++){
	        if(arr[i]=arr[j]){
	            if(i!=j){
	            arr[j]=0;
	        
	            }
	            }
	    }
	}
	
	for(int i=0;i<size;i++){
	    cout<<arr[i]<<" ";
	}
	
// 	int posSum=0,negSum=0;
// 	for(int i=0;i<size;i++){
	    
// 	            if(arr[i]>0){
// 	                posSum+=arr[i];
// 	            }else{
// 	                negSum+=arr[i];
// 	            }
// 	}
	  

	
	
	
// 	cout<<posSum<<" "<<negSum;
}
