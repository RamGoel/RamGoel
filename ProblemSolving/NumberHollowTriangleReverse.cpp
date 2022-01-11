
#include <iostream>

using namespace std;
int main()
{
    int rows;
    
    cout<<"Enter Row Number :";
    cin>>rows;
    int ref;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            if(ref!=j){
            cout<<j;
            }
        }
        for(int k=rows;k>i;k--){
            cout<<"  ";
        }
        for(int l=i;l>0;l--){
            if(l!=ref){
                
            cout<<l;
            }
        }
        
        cout<<endl;
        ref=i+2;
    }  
      
 }
