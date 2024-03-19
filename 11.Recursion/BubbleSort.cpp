#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n){
    //base case-array already sorted
    if (n==0||n==1)
    return ;

    // case 1
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    // R call
    bubbleSort(arr,n-1);
}


int main(){
    int arr[5];
    int n=5;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for (int i = 0; i <n ; i++){
    cout<<arr[i]<<" ";
    }


    return 0;
}