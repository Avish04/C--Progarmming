#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    queue<string> q;

     // put character in stack
    q.push("Avish");
    q.push("Singh");
    q.push("Raghav");

    cout<<"First Element "<<q.front()<<endl;
 
    // take off chars 
    q.pop();
    cout<<"First Element "<<q.front()<<endl;

    cout<<"size after pop "<<q.size()<<endl;

    return 0;
}