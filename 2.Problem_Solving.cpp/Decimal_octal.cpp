/* Problem Name: Decimal To Octal
Problem Difficulty: None
Problem Constraints: 0 < N <= 1000000000
Problem Description:
Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.
Input Format: 
Sample Input: 63
Output Format: 
Sample Output: 77  */

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    string octal = "";
    while (n!=0)
    {
        int i=n%8;
        n=n/8;
        char c=i+'0';
        octal=c+octal;
        /* code */
    }
    cout<<octal<<endl;
    

   




    return 0;
}