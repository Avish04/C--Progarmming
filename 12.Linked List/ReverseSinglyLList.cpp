#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this ->data=data;
        this ->next=NULL;
    }
};

// Iterative method
void ReverseList(Node* &head){

    if (head == NULL || head ->next = NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while (curr!=NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev; 
}

// Using Recursion

void reverse(Node* &head,Node* curr, Node* prev){
    // Base case
    if (curr==NULL)
    {
        head=prev;
        return;
    }

    Node* forward = curr ->next;
    // Recursion call
    reverse(head,forward,curr);
    curr ->next = prev;
    
}

Node* reverseList(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    reverse(head,curr,prev);
    return head;
}

// ------ Optimized Solution -------

Node* reverse1(Node* head){
    
    // Base case
    if (head == NULL || head ->next = NULL){
        return head;
    }

    Node* smallhead = reverse1(head ->next);
    head ->next ->next = head;
    head ->next = NULL;
    return smallhead;
}

int main(){
    return 0;
}