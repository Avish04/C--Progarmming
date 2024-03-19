//  Move Negative no. to the left side and positive no. to the right side

#include<iostream>
using namespace std;

// First Method
void Move(int arr[], int n){
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            if (i!=j)
            {
                swap(arr[i],arr[j]);
                j++;
            }
            
        }
        
    }
    
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
        
}

// Second Method

void Arrange(int arr[], int s, int e){
    
    while (s<=e)
    {
        if (arr[s]<0 && arr[e]<0)
        {
            s++;
        }

        else if (arr[s]>0 && arr[e]<0)
        {
            int temp = s;
            s = e;
            e = temp;
            s++;
            e--;
        }

        else if (arr[s]>0 && arr[e]>0)
        {
            e--;
        }

        else{
            s++;
            e--;
        }


        
        
    }
    
}

int main(){
    
    int arr[]={2,3,-1,4,-5,-6,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // First method
    Move(arr,n);
    print(arr,n);

    // Second Method
    // Arrange(arr,0,n-1);
    // print(arr,n-1);

    return 0;
}