// Fibonacci no. 0,1,1,2,3,5,8,13-------

#include<iostream>
using namespace std;

int Fib(int n){
    // Base class
    if (n==0)
    return 0;
    if(n==1)
    return 1;

    // R call
    int ans= Fib(n-1) + Fib(n-2);
    cout<<ans<<endl;
}

int main(){
    int a;
    cin>>a;
    Fib(a);



    return 0;
}