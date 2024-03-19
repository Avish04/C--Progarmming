/* 
ABCDE
ABCD
ABC
AB
A  */

#include<iostream>
using namespace std;

void printword(){

    int n;
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        int cnt_alphabets=n-i+1;
        char alphabet ='A';

        for (int j = 1; j <= cnt_alphabets; j++)
        {
            cout<<alphabet;
            alphabet++;
        }
        cout<<endl;
    }
    


}

int main(){

    printword();


    


    return 0;
}