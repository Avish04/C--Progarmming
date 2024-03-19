#include<iostream>
using namespace std;
class MAX
{
    private:
    int a,b;
    public:
    void input(){
    a=10;
    b=20;
    }
    void display(){
        if(a>b)
        cout<<"a is maxaimum";
        else
        cout<<"b is maximum";
    }
};

int main(){
    MAX obj;
    obj.input();
    obj.display();
    return 0;
}