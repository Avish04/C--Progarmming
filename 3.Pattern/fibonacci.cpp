/*0  1  1  2  3  5  8  13  21  34 */

#include<iostream>
using namespace std;

int main(){
    
    int i,a=0,b=1,sum=0,t,j;
    int r;
    cin>>r;

    for ( i = 1; i <= r; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        cout<<sum;
    }
    




    return 0;
}