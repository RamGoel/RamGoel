
#include <iostream>

using namespace std;

//Creating a User Defined data Type using Class
class Node{
public:
    int data;
    Node* next;
};


//Printing Elements of Linked List
void printList(Node* n){
    
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}



Node* InsertBegin( Node* head, int data){
    Node * newNode=new Node();
    
    newNode->next=head;
    newNode->data=data;
    
    return newNode;
}


Node * InsertAfter(Node* prevNode,int new_data){
    
    if(prevNode==NULL){
        cout<<"prevNode Cannot be NULL";
        return 0;
    }
    
    
    
    Node* ptr=new Node();
    
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    
    ptr->data=new_data;
    
    return prevNode;
    
    
}


Node* InsertEnd(Node* head, int data){
    Node* newNode=new Node();
    Node*p =head;
    newNode->data=data;
    while(p->next!=NULL){
        p=p->next;
        
    }
    p->next=new;
    newNode->next=NULL;
    
    return head;
}



Node* InsertIndex(Node* head,int data, int index){
    Node * newNode=new Node();
    newNode->data=data;
    
    Node* p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    
    newNode->next=p->next;
    p->next=newNode;
    
    return head;
    
}



int main()
{
    //Assigning the Pointer Varaibles
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    Node* fourth=NULL;
    Node* fifth=NULL;
    Node* sixth =NULL;
    Node* seventh=NULL;
    
    //Creating Objects of Class/Allocating Memory
    head=new Node();
    second=new Node();
    third=new Node();
    fourth=new Node();
    fifth=new Node();
    sixth=new Node();
    seventh=new Node();
    
    
    //assignign values
    head->data=8;
    head->next=second;
    
    second->data=10;
    second->next=third;
    
    third->data=13;
    third->next=fourth;
    
    fourth->data=15;
    fourth->next=fifth;
    
    fifth->data=1;
    fifth->next=sixth;
    
    sixth->data=12;
    sixth->next=seventh;
    
    seventh->data=19;
    seventh->next=NULL;
    
    
    
    printList(head);
    // head=InsertBegin(head,56);
    // InsertAfter(fifth,23);
    //InsertEnd(head,43);
    InsertIndex(head, 33, 3);
    cout<<endl;
    printList(head);
    
    
}
