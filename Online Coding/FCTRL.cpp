#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	 ll T;
	cin>>T;
	
	while(T--){
	    int digit;
	    ll val,count;
        cin>>val;
        ll fact=1;
	    for(int i=1;i<=val;i++){
	        fact=fact*i;
	    }
	    
	    while(fact%10==0){
	        count++;
	        fact=fact/10;
	    }
	    
	    cout<<count<<"\n";
	}
	return 0;
}
