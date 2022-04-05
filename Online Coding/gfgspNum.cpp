#include<iostream>
using namespace std;

int gCD(int a, int b){
    for(int i=9;i>=1;i--){
        if(a%i==0 && b%i==0){
            return i;
            break;
        }
    }
    return -1;
}
int specialNum(int num){
    //Code to extract digits;
    int arr[20];
    int count=0;
    int quadSum=0;
    int product=1;
    int k=0;
    while(num>0){
        arr[k]=num%10;
        num=num/10;
        count++;
        k++;
       
    }
    
    //code to calculate product and quad sum
    for(int i=0;i<count;i++){
        quadSum+=arr[i]*arr[i]*arr[i]*arr[i];
        product*=arr[i];
    }
    
    if(gCD(quadSum,product)>1){
        return 1;
    }
    
    
    return -1;
}
int main(){
    
    int testCases;
	cin>>testCases;
	int value;
	int spCount=0;
	
	for(int i=0;i<testCases;i++){
	    cin>>value;
	    spCount=0;
	    for(int j=1;j<=value;j++){
	        if(specialNum(j)==1){
                spCount++;
	        }
	    }
	    cout<<spCount;
	    cout<<"\n";
	}
	
	

    
}