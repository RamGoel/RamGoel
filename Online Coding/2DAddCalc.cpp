

#include <iostream>

using namespace std;

void calcAddress(int base, int width, int rows,int col,int posI,int posJ){
    int addressRow=base+width*(posI*rows+posJ);
    cout<<"Address of "<<posI<<","<<posJ<<" element of "<<rows<<"*"<<rows<<" array in Row Major Order is "<<addressRow<<"\n";
    
    int addressCol=base+width*(posJ*rows+posI);
    cout<<"Address of "<<posI<<","<<posJ<<" element of "<<rows<<"*"<<rows<<" array in Column Major Order is : "<<addressCol;
}
int main()
{
    cout<<"Address Calculation of 2D Array:\n";
    int posI,posJ;
    
    cout<<"Enter Row Index: ";
    cin>>posI;
    cout<<"Enter Column Index: ";
    cin>>posJ;
    
    calcAddress(1200,4,5,5,posI,posJ);
}
