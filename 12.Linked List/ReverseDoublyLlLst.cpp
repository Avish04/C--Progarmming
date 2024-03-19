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
};

Node* ReverseList(Node* &head){

    if (head ->next = NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;

    while (curr!=NULL)
    {
        forward = curr->next;
        curr->next = prev;
        curr->prev = forward;
        prev = curr;
        curr = forward;
    }

    return prev; 
}

int main(){
    


    return 0;
}