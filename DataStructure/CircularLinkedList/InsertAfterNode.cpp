

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

Node* InsertAfter(Node*first, Node* head, int newData){
    Node* newNode=new Node();
    newNode->data=newData;

    newNode->next=head->next;
    head->next=newNode;
    
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
    
    //Calling the Insert After Function
    cout<<"A Circular Linked List after inserting after third Node"<<endl;
    head=InsertAfter(head,third,112);
    printCList(head);
}
