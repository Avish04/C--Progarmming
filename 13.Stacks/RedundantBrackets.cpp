#include<iostream>
#include<stack>
using namespace std;

bool findRedudantBrackets(string &s){
    
    stack<char> st;
    for (int i = 0; i<s.length(); i++)
    {
        char ch=s[i];
        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }
        else{
            if(ch==')'){
                bool isRedudant = true;
                while (st.top())
                {
                    char top = st.top();
                    if(top=='+' || top=='-' || top=='*' || top=='/'){
                        isRedudant=false;
                    }
                    st.pop();
                }
                if(isRedudant == true)
                return true;
                st.pop();
            }
        }
    }
    return false;
    
}

int main(){
    
    return 0;
}