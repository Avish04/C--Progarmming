/*A 4 digit number is entered through keyboard. Write a program to print a new number with digits reversed as of orignal one. E.g.-
INPUT : 1234        OUTPUT : 4321
INPUT : 5982        OUTPUT : 2895*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a 4 digit no: ";
    int n;
    cin>>n;
    int reversed_no=0,remainder;

    while (n!=0)
    {
    remainder=n%10;
    reversed_no=reversed_no*10+remainder;
    n=n/10;
    }
    cout<<"Your no: "<<reversed_no<<endl;
    
   

    return 0;
}
