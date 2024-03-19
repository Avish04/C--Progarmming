#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int key,int row,int col){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col]==key)
            {
                return 1;
            }
            
        }
        
    }
    return 0; 

}

int main(){

    int arr[3][4];
    // taking input row wise
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

    cout<<"Element to be search"<<endl;
    int key;
    cin>>key;
    if (isPresent(arr,key,3,4))
    {
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    


    return 0;
}