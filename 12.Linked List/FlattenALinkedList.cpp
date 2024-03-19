#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

Node* merge(Node* a, Node* b){

    Node* ans=new Node(0);
    Node* temp=ans;

    while(a!=NULL && b!=NULL){
        if(a->data<b->data){
            temp->bottom=new Node(a->data);
            temp=temp->bottom;
            a=a->bottom;
        }
        else{
            temp->bottom=new Node(b->data);
            temp=temp->bottom;
            b=b->bottom;
        }
    }

    if(a==NULL)
    temp->bottom=b;

    else{
        temp->bottom=a;
    } 

    return ans->bottom;
} 

Node *flatten(Node *root)
{
    if(root==NULL || root->next==NULL)
    return root;

    Node* curr = flatten(root->next);
    Node* res=merge(root,curr);
    return res;
}