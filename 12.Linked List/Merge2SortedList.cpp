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

Node* solve(Node* first, Node* second){

    if(first-> next == NULL){
        first-> next = second;
        return first;
    }

    Node* curr1 = first;
    Node* next1 = curr1-> next;
    Node* curr2 = second;
    Node* next2 = curr2-> next;

    while(next1!=NULL && curr2!=NULL){

        if((curr2-> data) >= (curr1-> data) && (curr2-> data) <= (next1-> data)){
            curr1-> next = curr2;
            next2 = curr2-> next;
            curr2-> next = next1;
            curr1 = curr2;
            curr2 = next2;
        }

        else{
            curr1 = next1;
            next1 = next1-> next;
            
            if(next1 == NULL){
                curr1-> next = curr2;
                return first;
            }
        }
    }
    return first;

}

Node* sortTwoLists(Node* first, Node* second)
{
    

    if(first == NULL)
    return second;

    else if(second == NULL)
    return first;

    if(first-> data <= second-> data){
        return solve(first,second);
    }
    

    else{
        return solve(second,first);
    }
    
}


int main(){
    


    return 0;
}