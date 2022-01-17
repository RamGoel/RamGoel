#include<iostream>

using namespace std;

int printTwoDArray(int arr[int rowSize][int colSize]){
    
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;i++){
            cout<<arr[i][j];
        }
    }
}

int main(){
    
    int arr[10][10]={{10,20,25},{12,18,29},{45,67,89}};
    int rowSize=3,colSize=3;

    
    printTwoDArray(arr,rowSize,colSize);
}