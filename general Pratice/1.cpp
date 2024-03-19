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
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};

void insertAtHead(node* &head,int d){
    //new node
    node*temp=new node(d);
    temp ->next=head;
    head=temp;
}

void insertAtTail(node* &tail,int d){
    node*temp=new node(d);
    tail->next=temp;
    tail=temp;
}

void print(node* &head){
    node*temp=head;

    while (temp!=NULL)
    {
        cout<<temp ->data<<" ";
        temp=temp ->next;
    }
    cout<<endl;
}

void insertAtPosition(node* &tail,node* &head,int posi,int d){

    if(posi==1){
        insertAtHead(head,d);
        return;
    }

    node*temp=head;
    int cnt=1;

    if(cnt<posi-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next=NULL){
        insertAtTail(tail,d);
        return ;
    }

    node* position=new node(d);
    position->next=temp->next;
    temp->next=position;
    
}

void deleteNode(int posi,node* &head){
    // start node
    if(posi==1){
        node* temp=head;
        head=head->next;
        delete temp;
    }
}

int main(){

    //  created new node
    node* node1= new node(10);

    // head pointed to node1
    node*head=node1;
    node*tail=node1;
    print(head);

    // // insert at start
    insertAtHead(head,5);
    print(head);

    insertAtTail(tail,20);
    print(head);

    insertAtPosition(tail,head,3,15);
    print(head);
    
    return 0;
}