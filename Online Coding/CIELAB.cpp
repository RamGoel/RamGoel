#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int num1,num2;
	cin>>num1;
	cin>>num2;
	
	
	int val=num1-num2;
	int val1=val%10;
	val=val/10;
	if(val1+1<10){
	    val1=val1+1;
	}else if(val1-1>0){
	    val1=val1-1;
	}
	val=val*10+val1;
	
	cout<<val;
	
	return 0;
}
