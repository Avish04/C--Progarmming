#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

void splitCircularList(Node *head)
{
    Node *slow = head;
	Node *fast = head;
	
    //if the linked list is empty
	if(head == NULL)
		return;

    Node *tail = head;

    //finding the tail of the LL
    while(tail->next != head) {
        tail = tail->next;
    }
	
    //finding the middle of the LL
	while(fast->next!=head && fast->next->next!= head)
	{
        //move fast 2 steps at a time
		fast = fast->next->next;
        //move slow 1 step at a time
		slow = slow->next;
	}
	
	Node *middle = slow;

    //set head1 and head2 and split 
	Node *head1 = head;
	Node *head2 = middle->next;

    tail->next = head2;	
	middle->next = head1;

}

int main(){
    


    return 0;
}