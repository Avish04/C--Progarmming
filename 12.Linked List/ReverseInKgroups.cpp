/*
Reverse Linked list in K groups

 i/p- 2 3 4 5 
 o/p- 3 2 5 4

*/   

#include<iostream>
using namespace std;

Node* kGroups(Node* head, int k){

    // base case
    if (head == NULL)
    {
        return NULL;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int cnt = 0;

    // Step1 - Reverse first k nodes

    while (curr!=NULL && cnt<k)
    {
        next = curr->next;
        curr ->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }

    // Step2 - R call
    if (head!=NULL)
    {
        head->next = kGroups(next,k);
    }

    // Step3 - return
    return prev;
    

}

int main(){
    


    return 0;
}