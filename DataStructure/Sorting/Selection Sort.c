

#include <stdio.h>

int main()
{
    int arr[15]={10,20,12,11,2,13,15,16,33,1,2,3,4,5};
    int min;
    int arrSize=14;
    
    
    //Selection sort
    
    for(int i=0;i<arrSize;i++){
        min=i;
        for(int j=i+1;j<arrSize;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        
        if(min!=i){
            int ref=arr[i];
            arr[i]=arr[min];
            arr[min]=ref;
        }
    }
    
    
    //Traversal
    
    for(int i=0;i<arrSize;i++){
        printf("%d ",arr[i]);
    }
}
