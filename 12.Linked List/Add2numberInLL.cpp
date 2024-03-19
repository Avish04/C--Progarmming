#include<iostream>
using namespace std;

Node* reverse(Node* head){

    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    
    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        
    }
    
    return prev;
      
}

Node* add(Node* first, Node* second){
    int carry =0;
    
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    
    while(first!=NULL || second!=NULL || carry!=NULL){
        
        int val1=0;
        if(first!=NULL)
        val1=first->data;
        
        int val2=0;
        if(second!=NULL)
        val2=second->data;
        
        int sum = carry + val1 + val2;
        
        int digit = sum%10;
        
        insertatTail(ansHead,ansTail,digit);
        
        carry = sum/10;
        
        if(first!=NULL)
        first = first->next;
        
        if(second!=NULL)
        second = second->next;
        
    }
    
    return ansHead;
}

void insertatTail(Node* &head,Node* &tail, int val){
    
    Node* temp = new Node(val);
    
    if(head==NULL){
        head=temp;
        tail=temp;
        return;
    }
    
    else{
        tail->next=temp;
        tail=temp;
    }
}

Node* addTwoLists(Node* first, Node* second){

    first = reverse(first);
    second = reverse(second);
    
    Node* ans = add(first,second);
    
    ans = reverse(ans);
}

int main(){
    


    return 0;
}