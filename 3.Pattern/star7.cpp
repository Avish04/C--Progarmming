#include<iostream>
using namespace std;

int main(){

   int n;
   cin>>n;

   for (int i = n; i >=1 ; i--)
   {
    /* code */
    for (int s = i; s < n; s++)
    {
        /* code */
        cout<<" ";
    }
    for (int j = 1; j <= i; j++)
    {
        /* code */
        cout<<"*";
    }
    cout<<endl;
    
    
   }
    



    return 0;
}