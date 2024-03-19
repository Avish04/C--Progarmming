#include<iostream>
#include<string>
using namespace std;

bool checkPalin(string &str, int i, int j){
     // base class
    if(i>j)
    return true;

    if (str[i]!= str[j])
    {
        return false;
    }
    else{
    // R call
    return checkPalin(str,i+1,j-1);
    }
    
}

int main(){
    string name = "abbccbba";
    cout<<endl;

    bool isPalinderome= checkPalin(name,0,name.length()-1);

    if (isPalinderome)
    {
        cout<<"It is palindrome";
    }
    else{
        cout<<"It is not a Palindrome";
    }
    


    return 0;
}