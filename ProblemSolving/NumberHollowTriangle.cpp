
#include <iostream>

using namespace std;
int main()
{
    int ref;
    for(int i=5;i>0;i--){
        for(int j=1;j<=i;j++){
            if(ref!=j){
            cout<<j;
            }
        }
        for(int k=5;k>i;k--){
            cout<<"  ";
        }
        for(int l=i;l>0;l--){
            if(l!=ref){
                
            cout<<l;
            }
        }
        
        cout<<endl;
        ref=i;
    }  
      
 }
