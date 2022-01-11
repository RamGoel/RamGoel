

#include <iostream>

using namespace std;

int main()
{
   float temp;
   
   cout<<"Enter Temprature in Centigrade ";
   cin>>temp;


    if(temp<0){
        cout<<"Freezing Weather";
    }else if(temp>0 && temp<=10){
        cout<<"Very Cold Weather";
    }else if(temp>10 && temp<=20){
        cout<<"Cold Weather";
    }else if(temp>20 && temp<=30){
        cout<<"Normal Temprature";
    }else if(temp>30 && temp<40){
        cout<<"Hot Weather";
    }else if(temp>=40){
        cout<<"Very Hot Weather";
    }else{
        cout<<"Not a Valid Value";
    }
    return 0;
}
