

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


Node* InsertFront(Node* head, int Elem){
    
    Node*ptr=head;
    
    Node* newNode=new Node();
    newNode->data=Elem;
    
    newNode->prev=NULL;
    newNode->next=head;
    ptr->prev=newNode;
    
    head=newNode;
    
    return head;
    
}


Node* InsertLast(Node* head,int newData){
    Node* ptr=head;
    Node* newNode=new Node();
    newNode->data=newData;
    
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    
    ptr->next=newNode;
    newNode->prev=ptr;
    newNode->next=NULL;
    
    return head;
}



Node* InsertAfter(Node*head, Node* given, int newData){
    Node* ptr=head;
    Node* newNode=new Node();
    newNode->data=newData;
    
    while(ptr->prev!=given){
        ptr=ptr->next;
        
    }
    
    ptr->prev=newNode;
    newNode->next=ptr;
    newNode->prev=given;
    given->next=newNode;
    
    
    
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
    
    cout<<"A Doubly Linked List : ";
    printList(head);
    
    head=InsertFront(head,19);
    cout<<endl;
    cout<<"Doubly Linked List after Inserting in Front : ";
    printList(head);
    
    
    head=InsertLast(head,27);
    cout<<endl;
    cout<<"Doubly Linked List after Inserting at Last : ";
    printList(head);
    
    head=InsertAfter(head,second,32);
    cout<<endl;
    cout<<"Doubly Linked List after Inserting after a Node : ";
    printList(head);
    
    
    
    
    
    
}
