#include<bits/stdc++.h>
#include<map>
using namespace std;
 
/* Link list node */
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void push(struct Node** head_ref, int new_data)
{
   
    struct Node* new_node = new Node(new_data);
    
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
} 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , x ,i , num;
        struct Node *head = NULL;
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>num;
            push(&head,num);
        }
 
    /* Check the count function */
    cout <<countTriplets(head, x)<< endl;
    }
    return 0;
}


int countTriplets(struct Node* head, int x) 
{ 
    struct Node* last, *curr, *forw;
    int cnt=0;
    
    unordered_map<int,Node*> res;
    
    for(last=head;last!=NULL;last=last->next){
        res[last->data]=last;
    }
    
    for(curr=head;curr!=NULL;curr=curr->next){
        for(forw=curr->next;forw!=NULL;forw=forw->next){
            int p_sum = curr->data + forw->data;
            if(res.find(x-p_sum)!=res.end() && res[x-p_sum]!=curr && res[x-p_sum]!=forw)        
            cnt++;
        }
    }     
    
    return (cnt / 3);
    
} 