
#include <iostream>

using namespace std;
int main()
{
      
    int size;
    
    cout<<"Enter no. of Rows: ";
    cin>>size;
    
    for(int i=1;i<=size;i++){
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        for(int k=2;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }
    
 }
