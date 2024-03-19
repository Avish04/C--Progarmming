#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;

    // put character in stack
    s.push("Avish");
    s.push("Singh");
    s.push("Raghav");

    cout<<"Top Element "<<s.top()<<endl;
 
    // take off chars 
    s.pop();
    cout<<"Top Element "<<s.top()<<endl;
    
    // to show size of stack
    cout<<"Size "<<s.size()<<endl;
    
    // it tells about our storage of array is empty or not
    cout<<"Empty or not "<<s.empty()<<endl;

    return 0;
}