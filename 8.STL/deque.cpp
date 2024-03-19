#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;
    // to put value
    d.push_back(1);
    d.push_front(2);

    for (int i:d )
    {
        cout<<i<<" ";
    }
    
    // to take off value
    d.pop_front();
    cout<<endl;
    for (int i:d )
    {
        cout<<i<<" ";
    }
    
    cout<<"Print first index element-> "<<d.at(1)<<endl;

    // shows first element 
    cout<<"First Elment :"<<d.front()<<endl;
    
    // shows last element 
    cout<<"Last Elment :"<<d.back()<<endl;
    
    // it tells about our storage of array is empty or not
    cout<<"empty or not :"<<d.empty()<<endl;

    cout<<"before erase " <<d. size()<<endl;
    // to erase values
    d.erase (d.begin(),d.begin()+1);

    cout<<"after erase " <<d.size()<<endl;
    for(int i:d) {
        cout<<i<<endl;
    }
    

    return 0;
}