
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


Node* delFirst(Node* head){
    Node*p=head;
    head=head->next;
    free(p);
    
    return head;
}


Node* delIndex(Node* head, int index){
    Node* p=head;
    Node* q=p->next;
    
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
        
    }
    p->next=q->next;
    free(q);
    
    return head;
}


Node* delEnd(Node* head){
    Node*p=head;
    Node*q=p->next;
    
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    
    p->next=NULL;
    free(q);
    
    return head;
}

Node* delByValue(Node* head, int value){
    Node*p=head;
    Node*q=p->next;
    
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    
    if(q->data==NULL){
        p->next=q->next;
        free(q);
    
    }else{
        cout<<"Element not Found"<<endl;
    }

    
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
    
    
    cout<<"Linked List without Operation"<<endl;
    printList(head);
    
    cout<<endl<<"Linked List after deleting First Element"<<endl;
    head=delFirst(head);
    printList(head);
    
    cout<<endl<<"Linked List after deleting element at 3 index"<<endl;
    head=delIndex(head,3);
    printList(head);
    
    cout<<endl<<"Linked List after deleting an element with 13 value"<<endl;
    head=delByValue(head,13);
    printList(head);
    
    cout<<endl<<"Linked List after deleting last element"<<endl;
    head=delEnd(head);
    printList(head);
    
    
    
    
    
}
