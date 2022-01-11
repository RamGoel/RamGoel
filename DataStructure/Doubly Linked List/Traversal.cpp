

#include <iostream>

using namespace std;


class Node{
public:
    int data;
    Node* prev;
    Node* next;
    
};

Node* printList(Node* head){
    Node*p=head;
    while(p->next!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<p->data;
    
    return head;
}




int main()
{
    Node*head=NULL;
    Node*second=NULL;
    Node*third=NULL;
    Node*fourth=NULL;
    
    
    
    head=new Node();
    second=new Node();
    third=new Node();
    fourth=new Node();
    
    
    
    head->data=11;
    head->prev=NULL;
    head->next=second;
    
    
    second->data=13;
    second->prev=head;
    second->next=third;
    
    third->data=15;
    third->prev=second;
    third->next=fourth;
    
    fourth->data=17;
    fourth->prev=third;
    fourth->next=NULL;
    
    
    printList(head);
    
    
}
