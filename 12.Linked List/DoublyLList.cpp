#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    // destructor
    ~Node(){
        int value= this->data;
        if (next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
    
};

void print(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// gives Lenght of linked list
int getLength(Node* head){
    int len=0;
    Node* temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* &tail,Node* &head,int posi,int d){

    // insert at Start
    if (posi==1)
    {
        insertAtHead(head,d);
        return;
    }
    
    Node*temp=head;
    int cnt=1;

    while (cnt<posi-1)
    {
        temp=temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next==NULL)
    {
        insertAtTail(tail,d);
        return ;
    }
    
    // creating a node
    Node* nodeToInsert=new Node(d);

    nodeToInsert ->next = temp ->next;
    temp ->next ->prev = nodeToInsert;
    temp ->next = nodeToInsert;
    nodeToInsert ->prev = temp;
}

void deleteNode(int posi, Node* &head){
    
    //deletion first node
    if (posi==1)
    {
        Node* temp=head;
        temp ->next ->prev = NULL;
        head = temp ->next;
        temp ->next= NULL;
        delete temp;
    }
    else{
        // deletion any middle or last node
        Node*curr=head;
        Node*prev=head;

        int cnt=1;
        while (cnt<posi)
        {
            prev=curr;
            curr= curr->next;
            cnt++;
        }
        
        curr ->prev= NULL;
        prev ->next= curr ->next;
        curr ->next= NULL;
        delete curr;
        
    }
}

int main(){
    
    Node* node1=new Node(10);
    Node* head=node1;
    Node*tail=node1;
    print(head);

    // cout<<getLength(head)<<endl;
 
    insertAtHead(head,11);
    print(head);
    
    insertAtTail(tail,15);
    print(head);

    insertAtPosition(tail,head,2,120);
    print(head);

    deleteNode(1,head);
    print(head);

    return 0;
}