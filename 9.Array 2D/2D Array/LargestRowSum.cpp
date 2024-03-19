#include<iostream>
using namespace std;

int LargestRowSum(int arr[][4],int row,int col){
    int max= INT16_MIN;
    int rowindex=-1;
    for (int row = 0; row < 3; row++)
    {
        int sum=0;
        for (int col = 0; col < 4; col++)
        {
            sum+=arr[row][col];
            
        }
        if (sum>max)
        {
            max=sum;
            rowindex=row;
        }
        
        
    }
    cout<<"the Max sum is: "<<max<<endl;
    return rowindex;
}

int main(){
    int arr[3][4];
    // taking input row wise
    cout<<"Enter elements"<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin>>arr[row][col];
        }
        
    }

    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
        
    } 

    int ansIndex=LargestRowSum(arr,3,4);
    cout<<"Max row is at index "<<ansIndex<<endl;


    return 0;
}