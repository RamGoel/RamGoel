

#include <iostream>

using namespace std;

int main()
{
    char alpha;
    
    cout<<"Enter an Uppercase Character ";
    cin>>alpha;
    
    if(alpha=='A'|| alpha=='E'|| alpha=='I'|| alpha=='O'|| alpha=='U'){
        cout<<"Vowel";
    }else{
        cout<<"Consonant";
    }

    return 0;
}
