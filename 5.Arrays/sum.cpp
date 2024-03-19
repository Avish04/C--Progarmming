#include<iostream>
using namespace std;

int sum(int n){
    int arr[100];
    n=100;
    int sum;
    for (int i = 1; i <= 100; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
        
    }
    cout<<sum<<endl;
    
}

int main(){
    int size;
    cin>>size;

    int a;
    sum(a);



    return 0;
}