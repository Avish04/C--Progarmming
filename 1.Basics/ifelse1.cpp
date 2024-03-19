/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/

#include<iostream>
using namespace std;

int main(){

    int m,n;
    cout<<"Your salary: ";
    cin>>m;
    cout<<"Year Of Service: ";
    cin>>n;

    if(n>5){
        cout<<"Net Bonus Amount: "<<m+(m*.05)<<endl;
    }
    else{
        cout<<"Net Bonus Amount: "<<endl;
    }
    

    return 0;
}