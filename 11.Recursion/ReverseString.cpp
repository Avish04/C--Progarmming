#include<iostream>
#include<string>
using namespace std;

void reverse(string &str, int i, int j){
    // base class
    if(i>j)
    return ;
    swap(str[i], str[j]);
    i++;
    j--;
    //R call
    reverse(str,i,j);
}

int main(){
    string name = "Avish";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;


    return 0;
}