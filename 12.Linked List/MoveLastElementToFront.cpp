#include<iostream>
using namespace std;

Node* moveToFront(Node *head) {

    if(head->next==NULL)
    return head;

    Node* back = head;
    Node*  forw = head->next;

    while(forw->next!=NULL){
        back = forw;
        forw = forw->next;
    }

    back->next= NULL;
    forw->next =  head;
    head = forw;

    return head;




}

int main(){
    


    return 0;
}