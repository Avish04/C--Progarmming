#include<iostream>
using namespace std;

/* First Method - By using data replacement like firstly counting digits (how many one are there) in the LL then replace with the other digits. If the one is 
at the first place then it will replace with the zero. */
    
Node* sortList(Node *head){

    int Zerocnt=0;
    int Onecnt=0;
    int Twocnt=0;
        
    Node* temp = head;
    while(temp!=NULL){
            
        if(temp->data==0)
        Zerocnt++;
        
        else if(temp->data==1)
        Onecnt++;
        
        else if(temp->data==2)
        Twocnt++;
        
        temp = temp->next;
            
    }
        
    temp = head;
    while(temp!=NULL){
            
        if(Zerocnt!=0){
            temp->data=0;
            Zerocnt--;
        }
        
        else if(Onecnt!=0){
            temp->data=1;
            Onecnt--;
        }
        
        else if(Twocnt!=0){
            temp->data=2;
            Twocnt--;
        }
        
        
        temp = temp->next;
            
    }
        
    return head;
}

/* Second Method - In this we have created 3 nodes which later mergerd with each other to form one single node and it also have dummy node which at the end 
will be deleted. */

int main(){
    


    return 0;
}