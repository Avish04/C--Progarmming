#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;     

    //Contsructor
    node(int data){
        this ->data=data;
        this ->next=NULL;
    }

    // destructor
    ~node(){
        int value = this->data;
        if (this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertAtHead(node* &head,int d){
    //new node
    node*temp=new node(d);
    temp ->next=head;
    head=temp;
}

void InsertAtTail(node* &tail, int d){
    // new node create
    node*temp=new node(d);
    tail->next=temp;
    tail=temp;
}

void InsertATmiddle(node* &tail,node* &head,int posi, int d){
    
    // insert at Start
    if (posi==1)
    {
        insertAtHead(head,d);
        return;
    }
    
    node*temp=head;
    int cnt=1;

    while (cnt<posi-1)
    {
        temp=temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next==NULL)
    {
        InsertAtTail(tail,d);
        return ;
    }
    
    // creating a node
    node* nodeToInsert=new node(d);

    nodeToInsert -> next=temp ->next;

    temp -> next= nodeToInsert;
    
}

void deleteNode(int posi, node* &head){
    
    //deletion first node
    if (posi==1)
    {
        node* temp=head;
        head=head->next;
        // delete memory
        temp->next=NULL;
        delete temp;
    }
    else{
        // deletion any middle or last node
        node*curr=head;
        node*prev=NULL;

        int cnt=1;
        while (cnt<posi)
        {
            prev=curr;
            curr= curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}

// Print a node
void print(node* &head){
    node*temp=head;

    while (temp!=NULL)
    {
        cout<<temp ->data<<" ";
        temp=temp ->next;
    }
    cout<<endl;
}

int main(){

    //  created new node object
    node* node1= new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head pointed to node1
    node*head=node1;
    node*tail=node1;
    print(head);

    // insert at start
    insertAtHead(head,5);
    print(head);
    // insert at end
    InsertAtTail(tail,15);
    print(head);
 
    // insert at middle
    InsertATmiddle(tail,head,3,12);
    print(head);

    // cout<<"head "<< head->data <<endl;
    // cout<<"tail "<< tail->data <<endl;
    // print(head);

    deleteNode(2,head);
    print(head);

    return 0;
}