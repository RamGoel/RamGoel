
#include <iostream>

using namespace std;
int main()
{
    char letter='A';
    for(int i=0;i<=3;i++){
        for(int j=0;j<=i;j++){
            cout<<letter<<" ";
        }
        cout<<endl;
            letter++;
    }
}
