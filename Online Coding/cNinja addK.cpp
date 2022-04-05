
#include <iostream>
#include <vector>

using namespace std;

void calcLength(int n, int m, int k) {
    // Write your code here
    vector<int> v1;
    

    while(n>=0){
        v1.push_back(n%10);
        n=n/10;
    }
    
    while(m--){
        for(int i=0;i<v1.size();i++){
            v1[i]=v1[i]+k;
        }
    }
    
    
    
    int number=0;
    for(int j=0;j<v1.size();j++){
        number=number*10+v1[j];
    }
    
    cout<<number;
    
    vector<int> v2;
    

    while(n>=0){
        v2.push_back(n%10);
        n=n/10;
    }
    
    
    cout<<v2.size();
    
}

int main(){
    calcLength(86,3,2);
}