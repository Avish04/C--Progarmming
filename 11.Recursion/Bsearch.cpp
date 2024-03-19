#include<iostream>
using namespace std;

bool Bsearch(int *arr,int s,int e,int k){
    //base case 
    if(s>e)
    return false;
    int mid=s+(e-s)/2;
    if (arr[mid]==k)
    return true;
    if(arr[mid]<k){
    return Bsearch(arr,mid+1,e,k);
    }
    else{
        return Bsearch(arr,s,mid-1,k);
    }
    
}

int main(){
    
    int arr[10]={2,4,6,10,14,16};
    int k;

    cout<<"Present or not "<<Bsearch(arr,0,5,10)<<endl;




    return 0;
}