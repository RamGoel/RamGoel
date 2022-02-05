//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <iostream>
using namespace std;

int main(){
    int witAmount;
    float Balance;
    
    cin>>witAmount;
    cin>>Balance;
    
    if(witAmount%5==0 & witAmount<=Balance-0.5){
        Balance=Balance-(witAmount+0.5);
        cout<<Balance;
        
    }else{
        cout<<Balance;
    }
    
    
}
