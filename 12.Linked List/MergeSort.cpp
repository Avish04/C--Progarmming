#include<iostream>
using namespace std;

// Link list node 
class Node {
public:
    int data;
    Node* next;
};


//Function to merge two sorted linked list
Node* mergeSortedList(Node* head1, Node* head2)
{
    Node*  ans= NULL;
    
    if(head1==NULL)
    return head2;

    else if(head2==NULL)
    return head1;

    // Pick either head1 or head2 to make new head 
    if (head1->data <= head2->data) {
        ans = head1;
        ans->next = mergeSortedList(head1->next, head2); /* Recursion is called to split the head1 node into two small node and later on */
    }
    else {
        ans = head2;
        ans->next = mergeSortedList(head1, head2->next); /* Recursion is called to split the head2 node into two small nodes and later on  */
    }

    return ans;
}

//function to calculate the mid of a linked list
Node *middle(Node *head) {
    Node *slow = head;
    Node *fast = head->next;
    
    while(fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* mergeSort(Node* head)
{
    //Base case:- if size of linked list is 0 or 1
    if(head==NULL||head->next==NULL)
    {
        return head;
    }

    //Creating node to store mid of linked list
    Node* mid=new Node();
    mid=middle(head);

    // Two small nodes were created after splitting of one single node and their name is head1 and head2
    Node* head1 = head;
    Node* head2=mid->next;
    mid->next=NULL;
    
    // Function to merge two sorted linked list
    Node* newHead = mergeSortedList(mergeSort(head1),mergeSort(head2));

    return newHead;

}

// Function to insert a node at the beginning of the linked list 
void push(Node** head_ref,int newdata)
{
    //allocate memoray for new node
    Node* newNode=new Node();
    
    //put the data in new node
    newNode->data=newdata;

    //link the list to the new node
    newNode->next=(*head_ref);

    //update the head
    (*head_ref)=newNode;
}

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout<<endl;
}

int main()
{
    Node* head=NULL;

    //creating a unsorted list
    //to test out the function
    //list: 40->25->2->10->7->1
    push(&head, 1);
    push(&head, 7);
    push(&head, 10);
    push(&head, 2);
    push(&head, 25);
    push(&head, 40);
    
    cout<<"Linked list before sorting: "<<endl; 
    printList(head);


    Node* newHead=mergeSort(head);

    cout<<"Linked list after sorting: "<<endl; 
    printList(newHead);
}