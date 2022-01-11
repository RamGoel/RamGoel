

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


Node* insertBegin(Node* head,int newData){
    
    Node* newNode=new Node();
    newNode->data=newData;
    
    Node* ptr=head;
    
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next=newNode;
    newNode->next=head;
    
    head=newNode;
    
    return head;
    
}


Node* insertLast(Node* head,int newData){
    
    Node* newNode=new Node();
    newNode->data=newData;
    
    Node*p=head;
    
    while(p->next!=head){
        p=p->next;
    }
    
    p->next=newNode;
    newNode->next=head;
    
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



Node* InsertAfter(Node*first, Node* head, int newData){
    Node* newNode=new Node();
    newNode->data=newData;

    newNode->next=head->next;
    head->next=newNode;
    
    return first;
    
}

Node* InsertAfterValue(Node*first, int value, int newData){
    Node* newNode=new Node();
    newNode->data=newData;
    
    Node*ptr=first;
    int i=0;
    while(ptr->data!=value){
        ptr=ptr->next;
    }
    newNode->next=ptr->next;
    ptr->next=newNode;
    
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
    
    //Calling the Insert at Beginning Function
    cout<<"A Circular Linked List after inserting 3 at beginning"<<endl;
    head=insertBegin(head,3);
    printCList(head);
    
    
    cout<<endl;
    
    //Calling the Insert at Last Function
    cout<<"A Circular Linked List after inserting 23 at Last"<<endl;
    head=insertLast(head,23);
    printCList(head);
    
    cout<<endl;
    
    //Calling the Insert at Index Function
    cout<<"A Circular Linked List after inserting 20 at index 5"<<endl;
    head=insertIndex(head,20,5);
    printCList(head);
    
    cout<<endl;
    
    //Calling the Insert After Function
    cout<<"A Circular Linked List after inserting after third Node"<<endl;
    head=InsertAfter(head,third,112);
    printCList(head);
    
    
    cout<<endl;
    
    //Calling the Insert After Value Function
    cout<<"A Circular Linked List after inserting after  a Node with 10 value"<<endl;
    head=InsertAfterValue(head,112,130);
    printCList(head);
    
    
    
}
