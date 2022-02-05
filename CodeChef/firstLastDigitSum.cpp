#include<iostream>
using namespace std;
typedef long long ll;

int main(){
    ll T;
    cin>>T;
    
    
    while(T--){
        int val;
        int f,l;
        cin>>val;
        
        l=val%10;
        while(val>=10){
            val=val/10;
        }
        f=val%10;
        
        cout<<f+l;
        
    }
}
