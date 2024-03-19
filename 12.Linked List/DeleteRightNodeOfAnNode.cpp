#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
class Solution
{
    public:
     Node* reverse(Node* head){
        Node* cur = head;
        Node* next = NULL;
        Node* prev = NULL;
        while(cur){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    
    Node *compute(Node *head)
    {
        Node* revHead = reverse(head);
        Node* temp = revHead;
        Node* cur = revHead;
        int max = temp->data;
        while(cur && cur->next){
            if(cur->next->data < max){
                cur->next = cur->next->next;
            }else{
                cur = cur->next;
                max = cur->data;
            }
            
        }
        
        
        return reverse(revHead);
    }
    
};
   