/*
    Input
int arr[5]={1,2,3,4}
      Output
      {4,3,2,1}

*/
#include<iostream>
using namespace std;

void ReverseArray(int arr[],int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
}

void PrintReverse(int arr[],int n){

    for (int i = 0; i <n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    
    int arr[4];
    int n=4;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ReverseArray(arr,4);
    PrintReverse(arr,4);


    return 0;
}