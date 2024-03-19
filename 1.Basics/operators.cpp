// Different Types of operators//

#include<iostream>
using namespace std;

int main(){
    
    // Comma operator
    int a,b,c;

    //Assign Operator
    a = 10;
    b = 20;
    c = 30;

    //Logical Operator
    if (c>b and c>a)
    {
        cout<<"c is greater"<<endl;
    }

    //Ternary Operator
    int x= c%2==0 ? 1:0;
    cout<<x<<endl;
    c%2==0 ? cout<<"Even": cout<<"Odd";
    cout<<endl;

    //Bitwise 
    x=5;
    int y=7;
    cout<<(x&y)<<endl;          // use curly brackets in bitwise at (x&Y)
    cout<<(x|y)<<endl;
    cout<<(x^y)<<endl;

    //shift
    x=x<<2;
    cout<<x<<endl;
    cout<<(y>>1)<<y<<endl;

    //Unary
    cout<<(&x)<<endl;

    //Increment and Decrement
    a=5;
    b=a++;
    cout<<b<<endl;
    c=++a;
    cout<<c<<endl;

    //Compound Assignment
    a=5;
    a*=10;
    cout<<"A after multiply"<<a<<endl;
    a%=6;
    cout<<"A after modulo"<<a<<endl;

    b=7;
    b<<=1;
    cout<<"B after left shift"<<b<<endl;
    
    return 0;
}