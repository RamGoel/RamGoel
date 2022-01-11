

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


Node* insertIndex(Node* head,int newData,int index){
    
    Node* newNode=new Node();
    newNode->data=newData;
    
    
    Node*ptr=head;
    
    int i=0;
    
    while(i!=index-1){
        ptr=ptr->next;
        i++;
    }
    
    newNode->next=ptr->next;
    ptr->next=newNode;
    
    return head;
    
    
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
    
    //Calling the Insert at Index Function
    cout<<"A Circular Linked List after inserting 20 at index 5"<<endl;
    head=insertIndex(head,20,10);
    printCList(head);
}
