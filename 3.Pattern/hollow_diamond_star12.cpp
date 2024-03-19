#include<iostream>
using namespace std;

int main(){

    int n,i,j,s;
    cin>>n;

    for (int i = n; i >= 1; i--)
    {
        for (int s = i; s < n; s++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= (2*i-1); j++)
        {
            if (i==n || j==1 || j==2*i-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    


    return 0;
}