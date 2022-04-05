#include<iostream>


using namespace std;


int enqueue(int value ,int &rear,int &frontV, int Q[],int maxsize){

    rear=(rear+1)%maxsize;
    Q[rear]=value;


    return rear;

}



int checkEmpty(int frontV,int rear){

    if(frontV>rear){
        return 1;
    }
    return 0;

}


int dequeue(int rear,int frontV,int Q[],int maxsize){

    if(!checkEmpty(frontV,rear)){
        int elem=Q[frontV];
        frontV=(frontV+1)%maxsize;

        cout<<elem<<" Popped"<<endl;
        return frontV;
    }

    return -1;

}




void peek(int frontV, int Q[]){

    cout<<Q[frontV]<<endl;
}



void printQ(int Q[],int rear,int frontV,int maxSize){

    int iter=frontV;
    while(iter!=rear+1){
        cout<<Q[iter]<<" ";
        iter=(iter+1)%maxSize;
    }
    cout<<endl;
}


int main(){


    int Q[10];
    int rear=-1;
    int frontV=-1;

    rear=enqueue(23,rear,frontV,Q,10);
    frontV++;
    rear=enqueue(29,rear,frontV,Q,10);
    rear=enqueue(27,rear,frontV,Q,10);
    rear=enqueue(22,rear,frontV,Q,10);
    rear=enqueue(22,rear,frontV,Q,10);
    rear=enqueue(22,rear,frontV,Q,10);
    rear=enqueue(22,rear,frontV,Q,10);
    rear=enqueue(22,rear,frontV,Q,10);
    rear=enqueue(22,rear,frontV,Q,10);
    rear=enqueue(22,rear,frontV,Q,10);
    rear=enqueue(22,rear,frontV,Q,10);

    printQ(Q,rear,frontV,10);

    frontV=dequeue(rear,frontV,Q,10);
    frontV=dequeue(rear,frontV,Q,10);


    rear=enqueue(71,rear,frontV,Q,10);
    rear=enqueue(79,rear,frontV,Q,10);
    rear=enqueue(22,rear,frontV,Q,10);

    printQ(Q,rear,frontV,10);


    peek(frontV,Q);


}
