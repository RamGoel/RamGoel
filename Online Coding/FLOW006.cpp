

#include <iostream>
using namespace std;

int main() 
{
   int T;
   cin>>T;
   
   while(T>0){
       int value;
       cin>>value;
       
       int sum=0;
       while(value>0){
           int num=value%10;
           value=value/10;
           
           sum=sum+num;
       }
       
       cout<<sum<<"\n";
       T--;
   }
	return 0;
}
