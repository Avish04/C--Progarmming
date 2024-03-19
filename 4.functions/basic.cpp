#include<iostream>
using namespace std;

int add(int n){
    int sum=0;
    for (int i = 1; i <= n; i++)
    {                                                       // function use //
        sum=sum+i;                        
    }
    return sum;

}

int main(){

    int n;
    cout<<"Enter Number :";
    cin>>n;
    add(n);
    cout<<add(n)<<endl;

    

    
    


    return 0;
}