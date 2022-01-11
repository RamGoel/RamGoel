

#include <iostream>

using namespace std;

int main()
{
    int base,Total,da, allow, hra,pf;
    char Grade;
    
    cout<<"Enter Base Pay ";
    cin>>base;
    cout<<"Enter Grade ";
    cin>>Grade;
    
    hra=(base/100)*20;
    da=(base/100)*50;
    pf=(base/100)*11;
    if(Grade=='A'){
        allow=1700;
    }else if(Grade=='B'){
        allow=1500;
    }else{
        allow=1300;
    }
    
    Total=base+hra+da-pf+allow;
    cout<<Total;
    
    
    
    
    

    return 0;
}
