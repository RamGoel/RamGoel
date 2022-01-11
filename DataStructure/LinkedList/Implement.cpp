

#include <iostream>

using namespace std;


class Node{
public:
    int data;
    Node* next;
};




int main()
{
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    Node* fourth=NULL;
    Node* fifth=NULL;
    Node* sixth =NULL;
    Node* seventh=NULL;
    
    
    head=new Node();
    second=new Node();
    third=new Node();
    fourth=new Node();
    fifth=new Node();
    sixth=new Node();
    seventh=new Node();
    
    
    
    head->data=8;
    head->next=second;
    
    second->data=10;
    second->next=third;
    
    third->data=13;
    third->next=fourth;
    
    fourth->data=15;
    fourth->next=fifth;
    
    fifth->data=1;
    fifth->next=sixth;
    
    sixth->data=12;
    sixth->next=seventh;
    
    seventh->data=19;
    seventh->next=NULL;
    
    
    
    return 0;
    
    
}
