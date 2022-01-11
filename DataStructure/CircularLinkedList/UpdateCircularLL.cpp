

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


int LinSearch(Node* head,int Item){
    Node* ptr=head;
    
    while(ptr->next!=head){
        ptr=ptr->next;
        if(ptr->data==Item){
            return 1;
        }
    }
    
    return -1;
    
    
}


int Update(Node* head,int Item,int newValue){
    Node* ptr=head;
    
    while(ptr->next!=head){
        ptr=ptr->next;
        if(ptr->data==Item){
            ptr->data=newValue;
            return 1;
        }
    }
    
    return -1;
    
    
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
    
    
    
    //Searching Element in Linked List
    cout<<endl;
    int findItem;
    int replaceItem;
    
    cout<<"Enter a digit to found"<<endl;
    cin>>findItem;
    
    cout<<"Enter a digit to Replace"<<endl;
    cin>>replaceItem;
    
    cout<<endl;
    if(LinSearch(head,findItem)==1){
        Update(head,findItem,2);
        cout<<"Item Found and Replaced"<<endl;
        printCList(head);
    }else{
        cout<<"Item Not Found";
    }
    
    
   
   
    
    
    
    
    
}
