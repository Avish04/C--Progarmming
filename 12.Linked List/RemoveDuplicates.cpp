#include<iostream>
#include<unordered_map>
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
};

// FOR SORTED LINKED LIST

Node* SortedList(Node* head){
    // empty list
    if (head==NULL)
    {
        return NULL;
    }

    // non empty list
    Node* curr=head;

    while (curr!=NULL)
    {
        if ((curr->next=NULL) && curr->data== curr->next->data){
            Node* next_next = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete(nodeToDelete);
        }

        else
        {
            curr = curr->next;
        }
    }

    return head;
}

/* FOR UNSORTED LINKED LIST */

// Using two while loops
Node *removeDuplicates(Node *head)
{
    Node* curr = head;

    while(curr!=NULL){
        Node* temp = curr->next;
        Node* prev = curr;

        while(temp!=NULL){
            if(curr->data==temp->data){
                prev->next = temp->next;
                delete(temp);
                temp = prev->next;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        
        curr = curr->next;
    }

    return head;
}

// Optimized Code

/*-- Using Map ---*/

Node *removeDuplicates(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;

    if (curr == NULL)
    return NULL;

    unordered_map<int,bool> visited;

    while (curr != NULL)
    {

        if (visited[curr->data])
        {
            Node *temp = curr;
            curr = curr->next;
            delete (temp);
            prev->next = curr;
        }
        
        else
            {
                visited[curr->data] = true;
                prev = curr;
                curr = curr->next;
            }
                
    }
    

    return head;
}



int main(){



    return 0;
}