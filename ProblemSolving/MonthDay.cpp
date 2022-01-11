#include <iostream>

using namespace std;
int main(){
 
	int num;
	cin>>num;
	
	
	if(num==2){
	    cout<<"28 days";
	}else if(num==4  || num==6  || num==9  || num==11){
	    cout<<"30 days";
	}else if(num>12){
	    cout<<"Not Valid";
	}else{
	    cout<<"31 days";
	}
	
	
	
}
