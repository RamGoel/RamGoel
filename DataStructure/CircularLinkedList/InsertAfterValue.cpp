

#include <iostream>


using namespace std;


class Node{
    public:
        int data;
        Node* next;
        
};


Node* printCList(Node* head){
    Node* ptr=head;
        
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!=head);
    
    
    
    return head;
}

Node* InsertAfterValue(Node*first, int value, int newData){
    Node* newNode=new Node();
    newNode->data=newData;
    
    Node*ptr=first;
    int i=0;
    while(ptr->data!=value){
        ptr=ptr->next;
    }
    if(ptr->data==value){
        
    newNode->next=ptr->next;
    ptr->next=newNode;
    }
    
    return first;
    
}



int main()
{
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    Node* fourth=NULL;
    
    
    
    head=new Node();
    second=new Node();
    third=new Node();
    fourth=new Node();
    
    
    head->data=7;
    head->next=second;
    
    second->data=10;
    second->next=third;
    
    third->data=13;
    third->next=fourth;
    
    fourth->data=15;
    fourth->next=head;
    
    
    //Calling the Traversal Function
    cout<<"A Circular Linked List"<<endl;
    printCList(head);
    
    
      
    
    cout<<endl;
    
    //Calling the Insert After Value Function
    cout<<"A Circular Linked List after inserting after  a Node with 10 value"<<endl;
    head=InsertAfterValue(head,13,130);
    printCList(head);
}
