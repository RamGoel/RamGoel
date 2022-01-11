

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







Node* DeleteAfterNode(Node* head, Node* givenNode){
    
    Node *ptr=givenNode->next;
    
    
    givenNode->next=ptr->next;
    
    free(ptr);
    
    return head;
}





int main()
{
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    Node* fourth=NULL;
    Node* fifth=NULL;
    Node* sixth=NULL;
    
    
    
    head=new Node();
    second=new Node();
    third=new Node();
    fourth=new Node();
    fifth=new Node();
    sixth=new Node();
    
    
    head->data=7;
    head->next=second;
    
    second->data=10;
    second->next=third;
    
    third->data=13;
    third->next=fourth;
    
    fourth->data=15;
    fourth->next=fifth;
    
    fifth->data=17;
    fifth->next=sixth;
    
    sixth->data=19;
    sixth->next=head;
    
    
    //Calling the Traversal Function
    cout<<"A Circular Linked List"<<endl;
    printCList(head);
    
    
   
   
   
    
    
    cout<<endl;
    
    //Calling the DeleteAfterNodeNode Function
    cout<<"A Circular Linked List after deleting next node to a givenNode"<<endl;
    head=DeleteAfterNode(head, second);
    printCList(head);
    
    
    
    
    
}
