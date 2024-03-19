#include<iostream>
using namespace std;

bool Lsearch(int arr[],int m,int key){
    for (int i = 0; i < m; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }  
    }
    return 0;
}

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int key;
    cin>>key;

    bool found = Lsearch(arr,8,key);

    if (found)
    {
        cout<<"Present";
    }
    else
    {
        cout<<"Absent";
    }
    
    


    


    return 0;
}