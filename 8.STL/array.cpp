#include<iostream>
#include<array>
using namespace std;

int main(){

    int basic[3]={1,2,3};
    array<int, 4>a={1,2,3,4};
    int size = a.size();

    for (int i = 0; i <size; i++)
    {
        cout<<a[i]<<endl;
    }

    // value at given index 
    cout<<"Element at 2nd index :"<<a.at(2)<<endl;
    // it tells about our storage of array is empty or not
    cout<<"empty or not :"<<a.empty()<<endl;
    // shows first element in vector
    cout<<"First Elment :"<<a.front()<<endl;
    // shows last element in vector
    cout<<"Last Elment :"<<a.back()<<endl;

    


    return 0;
}