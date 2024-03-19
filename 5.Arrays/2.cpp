/* Alternate swap 
an array {1,2,3,4}
o/p = {2,1,4,3}
*/

#include<iostream>
using namespace std;

void print(int arr[],int a){
    for (int i = 0; i < a; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}

void AlternateSwap(int arr[], int n){
    n=4;
    for ( int i = 0; i <n; i+=2)
    {
        if (i+1<n)
        {
            /* code */
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}

int main(){

    int arr[4]={4,5,6,7};
    AlternateSwap(arr,4);
    print(arr,4);
    
    


    return 0;
}