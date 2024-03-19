#include<iostream>
using namespace std;

int getSum(int arr[], int size){
    if (size==0)
    {
        return 0;
    }
    if (size==1)
    {
        return arr[0];
    }

    int remainPart = getSum(arr+1,size-1);
    int sum= arr[0]+ remainPart;
    return sum;    
    

}

int main(){
    
    int arr[5];
    int n=5;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int sum = getSum(arr,5);

    cout<<"sum is "<<sum<<endl;


    return 0;
}