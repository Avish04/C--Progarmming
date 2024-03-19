#include<iostream>
#include<stack>
using namespace std;

void sortStack(stack<int> &stack){
    // base case
    if(stack.empty())
    return ;

    int num = stack.top();
    stack.pop();

    // R call
    sortStack(stack);

    sortedInsert(stack,num);
}

void sortedInsert(stack<int> &stack, int num){
    // base case
    if(stack.empty() || (!stack.empty() && stack.top()< num)){
        stack.push(num);
        return ;
    }

    int n = stack.top();
    stack.pop();

    // R call
    sortedInsert(stack,num);

    stack.push(n);
}

int main(){
    
    return 0;
}