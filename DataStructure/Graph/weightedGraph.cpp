#include<iostream>
#include<vector>

using namespace std;


int enqueue(int value ,int &rear,int &frontV, int Q[]){

    rear++;
    Q[rear]=value;


    return rear;

}



int checkEmpty(int frontV,int rear){

    if(frontV>rear){
        return 1;
    }
    return 0;

}


int dequeue(int rear,int frontV,int Q[]){

    if(!checkEmpty(frontV,rear)){
        int elem=Q[frontV];
        frontV++;

        cout<<elem<<" Popped"<<endl;
        return frontV;
    }

    return -1;

}




void peek(int frontV, int Q[]){

    cout<<Q[frontV]<<endl;
}



void printQ(int Q[],int rear,int frontV){

    int iter=frontV;
    while(iter!=rear+1){
        cout<<Q[iter]<<" ";
        iter++;
    }
    cout<<endl;
}


int main(){


    int Q[10];
    int rear=-1;
    int frontV=-1;

    rear=enqueue(23,rear,frontV,Q);
    frontV++;
    rear=enqueue(29,rear,frontV,Q);
    rear=enqueue(27,rear,frontV,Q);
    rear=enqueue(22,rear,frontV,Q);

    printQ(Q,rear,frontV);

    frontV=dequeue(rear,frontV,Q);
    frontV=dequeue(rear,frontV,Q);

    printQ(Q,rear,frontV);


    peek(frontV,Q);


}
