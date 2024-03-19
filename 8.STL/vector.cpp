#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    
    // To print values of vector
    vector<int> a(5,1);
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

   // copy value of one vector to another
    vector<int> last(a);
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"capacity-> "<<v.capacity()<<endl;
    
    // used to put the value in vector
    v.push_back(1);
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity-> "<<v.capacity()<<endl;
    
    // shows size of vector
    cout<<"Size-> "<<v.size()<<endl;

    // value at given index 
    cout<<"Element at 2nd index :"<<v.at(2)<<endl;
   
    // shows first element in vector
    cout<<"First Elment :"<<v.front()<<endl;
    // shows last element in vector
    cout<<"Last Elment :"<<v.back()<<endl;
   
    cout<<"before pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    // it take off the value from vector
    v.pop_back();

    cout<<"after pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"before clear "<<v.size()<<endl;
    // it erase all values
    v.clear();
    cout<<"after clear "<<v.size()<<endl;




    return 0;
}