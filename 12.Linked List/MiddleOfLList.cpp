#include<iostream>
using namespace std;

int getLenght(Node* head){
    int len=0;
    while (head!=NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

Node* findMiddle(Node* head){
    int len = getLenght(head);
    int ans = (len/2);

    Node* temp = head;
    int cnt = 0;
    while (cnt<ans)
    {
        temp = temp->next;
        cnt++
    }
    return temp;
    
}

// ------ Optimized Solution -------

Node* getMiddle(Node* head){
    
    // 1 node
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // 2 node
    if (head ->next->next == NULL )
    {
        return head ->next;
    }

    Node* slow = head;
    Node* fast = head ->next;

    while (fast!=NULL)
    {
        fast = fast ->next;
        if (fast!=NULL)
        {
            fast = fast ->next;
        }

        slow = slow->next;
    }
    return slow;
    
}

Node* findMiddle(Node* head){
    return getMiddle(head);
}

int main(){
    


    return 0;
}