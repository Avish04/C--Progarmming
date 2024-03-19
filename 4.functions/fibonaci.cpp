/*0  1  1  2  3  5  8  13  21  34 */
// Find the no. at this value in the fibonacci series 

#include<iostream>
using namespace std;

int fibonaci(int n){

    int a=0,b=1,c;

    for ( int i = 1; i <= n-2; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
    


}

int main(){

    int n;
    cin>>n;
    fibonaci(n);

    cout<<fibonaci(n)<<endl;
    


    return 0;
}