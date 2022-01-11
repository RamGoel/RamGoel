

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






Node* DeleteByValue(Node* head,int value){
    
    Node* ptr=head->next;
    Node* qtr=head;
   
   while(ptr->data!=value){
       ptr=ptr->next;
       qtr=qtr->next;
   }
   
   qtr->next=ptr->next;
   free(ptr);
   
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
    
    //Calling the DeleteLast Function
    cout<<"A Circular Linked List after deleting Node with Given value"<<endl;
    head=DeleteByValue(head,13);
    printCList(head);
    
    
    
}
