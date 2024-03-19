#include<iostream>
using namespace std;

class Node
{
	public:
	    int data;
	    Node *next;
	    Node *prev;
	    Node(int data)
	    {
	        this->data = data;
	        this->next = NULL;
	        this->prev = NULL;
	    }  
};

Node* reverseDLLInGroups(Node* head, int k){	
    Node* last = NULL, *curr = head, *ahead = NULL; 
    Node* tail = NULL, *join = NULL; 
    
    Node* newHead = NULL; 
    int count = 0; 
  
    // Traverse the linked list to the end.
    while (curr != NULL) 
	{ 
        count = k; 
        join = curr; 
        last = NULL; 
  
        // Reversing the k nodes.
        while (curr && count > 0) 
		{ 
            ahead = curr->next; 
            curr->next = last;
            if(last != NULL)
            {
            	last->prev = curr;
            }
            last = curr; 
            curr = ahead; 
            count -= 1;
        } 
  
        // Update the new head for the modified linked list.
        if (newHead == NULL) 
        {
            newHead = last; 
        }
  
        //  Tail pointer is joined with the first node of the remaining linked list.
        if (tail)
        {
            tail->next = last; 
            last->prev = tail;
        }
        
        // Updating tail for the next iteration. 
        tail = join;  
    } 
  
    // New head of the modified list is returned.
    return newHead;
}

int main(){


    return 0;
}
