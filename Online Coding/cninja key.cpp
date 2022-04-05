
#include <iostream>

using namespace std;


void calcLength(int n, int m, int k) {
    // Write your code here
    int arr[10];
    
    int i=0;
    int count=0;
    while(n>=0){
        arr[i]=n%10;
        n=n/10;
        i=i+1;
        count++;
    }
    
    while(m--){
        for(i=0;i<count;i++){
            arr[i]=arr[i]+k;
        }
    }
    
    int number=0;
    for(int j=0;j<count;i++){
        number=number*10+arr[i];
    }
    
    int arr2[10];
    
    int s=0;
    int countS=0;
    while(n>=0){
        arr[s]=n%10;
        n=n/10;
        s=s+1;
        countS++;
    }
    
    
    cout<<countS;
    
}


int main()
{
   calcLength(82,3,5);

}