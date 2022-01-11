
#include <iostream>

using namespace std;
int main()
{
      
    for(int i=0;i<=3;i++){
        for(int k=0;k<=i;k++){
            cout<<" ";
        }cout<<" ";
        for(int j=i;j<=2;j++){
            cout<<"* ";
        }
        cout<<endl;
        
    }  
    for(int i=0;i<=2;i++){
        for(int k=3;k>=i;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }  
 }
