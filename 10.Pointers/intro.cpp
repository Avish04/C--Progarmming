#include<iostream>
using namespace std;

int main(){
    
    int i=5;
    int *p=&i;
    int **p2=&p;

    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<*p2<<endl;
    cout<<**p2<<endl;

    int arr[10]={2,5,6};

    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;

    char ch[6]="abcd";
    char *c=&ch[0];
    cout<<c<<endl;

    
    


    return 0;
}