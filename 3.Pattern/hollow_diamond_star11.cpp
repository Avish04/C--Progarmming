#include<iostream>
using namespace std;

int main(){
    
    int n,j,i,s;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int s = i; s < n; s++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=(2*n-1); j++)
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