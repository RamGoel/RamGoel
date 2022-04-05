/******************************************************************************

                              Cpp Data Structures and Algorithms
                                Example of Array Creation in Cpp

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    int i,size; //Initializing a Traverse Variable i and size variable for size of array
    
    //Creating an Array
    
    //Declaration and Initialization of an array. 
    int arr[]={23,43,56,77,67,89,90};
    
    //Size will be equal to no. of Elements in Initialization.
    size =sizeof(arr)/sizeof(int);
    
    
    //Array Traversal (Visiting all Elements or Printing all Elements)
    for(i=0;i<size;i++){
        cout<<i+1<<"th element of Array is "<<arr[i]<<endl;
    }
}
