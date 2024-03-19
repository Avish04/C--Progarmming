#include<iostream>
using namespace std;

 int Bsearch(int arr[],int a,int key){
    int s=0;
    int e=a-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if (key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;   
    }
    return -1;
    
}

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int key;
    cin>>key;

   int index= Bsearch(arr,8,key);
   cout<<"Index is : "<<index<<endl;


    return 0;
}