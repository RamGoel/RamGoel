

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




Node* DeleteBegin(Node* head){
    Node* ptr=head->next;
    
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    
    ptr->next=head->next;
    free(head);
    head=ptr->next;
    
    return head;
    
}


Node* DeleteLast(Node* head){
    
    Node* ptr=head->next;
    Node* qtr=head;
    while(ptr->next!=head){
        ptr=ptr->next;
        qtr=qtr->next;
    }
    
    qtr->next=ptr->next;
    free(ptr);
    
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





Node* DeleteByNode(Node* head, Node* givenNode){
    
    Node* ptr=head->next;
    
    while(ptr->next!=givenNode){
        ptr=ptr->next;
    }
    
    ptr->next=givenNode->next;
    free(givenNode);
    
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
    
    //Calling the DeleteBegin Function
    cout<<"A Circular Linked List after deleting first Node"<<endl;
    head=DeleteBegin(head);
    printCList(head);
    
    
    cout<<endl;
    
    //Calling the DeleteLast Function
    cout<<"A Circular Linked List after deleting last Node"<<endl;
    head=DeleteLast(head);
    printCList(head);
    
    cout<<endl;
    
    //Calling the DeleteByValue Function
    cout<<"A Circular Linked List after deleting Node with Given value"<<endl;
    head=DeleteByValue(head,13);
    printCList(head);
    
    
    cout<<endl;
    
    //Calling the DeletebyNode Function
    cout<<"A Circular Linked List after deleting a Node"<<endl;
    head=DeleteByNode(head, fifth);
    printCList(head);
    
    
    cout<<endl;
    
    //Calling the DeleteAfterNode Function
    cout<<"A Circular Linked List after deleting next node to a givenNode"<<endl;
    head=DeleteAfterNode(head, second);
    printCList(head);
    
    
    
    
}
