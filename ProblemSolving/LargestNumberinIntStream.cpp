
#include <iostream>

using namespace std;
int main()
{
    int num;
    int size;
    int rem;
    int great=0;
    
    cout<<"Enter Number Size";
    cin>>size;
    cout<<"Enter Number ";
    cin>>num;
    for(int i=0;i<=size;i++){
        rem=num%10;
        if(rem>great){
            great=rem;
        }
        num=num/10;
    }
    
    cout<<great;
 }
