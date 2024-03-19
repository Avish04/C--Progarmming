#include<iostream>
using namespace std;

void Rarray(int arr[],int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
}

int main(){

    int arr[4];
    int n=4;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    Rarray(arr,4);

    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    

    return 0;
}

