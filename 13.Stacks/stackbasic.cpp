#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    // creation of stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    // pop
    s.pop();

    cout<<"Printing top element "<<s.top()<<endl;

    if (s.empty())
    {
        cout<<"stack is empty"<<endl;
    }

    else{
        cout<<"stack is not empty"<<endl;
    }
    
   cout<<"size of stack "<<s.size()<<endl;

    return 0;
}