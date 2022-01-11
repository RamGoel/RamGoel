

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




Node* DeleteFront(Node*head){
    Node*ptr=head->next;
    
    ptr->prev=NULL;
    free(head);
    
    head=ptr;
    
    return head;
    
    
}


Node* DeleteLast(Node* head){
    
    Node* ptr=head->next;
    Node*qtr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        qtr=qtr->next;
    }
    
    qtr->next=NULL;
    free(ptr);
    
    return head;
}


Node* DeleteNode(Node* given, Node* head){
    Node* ptr=head;
    
    while(ptr->prev!=given){
        ptr=ptr->next;
    }
    
    ptr->prev=given->prev;
    
    
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
    
    cout<<"A Doubly Linked List : ";
    printList(head);
    
    
    
    
    head=DeleteLast(head);
    cout<<endl;
    cout<<"Doubly Linked List after Deleting First Node : ";
    printList(head);
    
    
    
}
