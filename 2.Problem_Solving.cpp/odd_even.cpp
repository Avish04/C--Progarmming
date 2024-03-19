/*
Problem Name: Odd and Even back in Delhi
Problem Difficulty: 1
Problem Constraints: N<=1000
Car No >=0 && Car No <=1000000000
Problem Description:
Due to an immense rise in Pollution, Kejriwal is back with the Odd and Even Rule in Delhi. The scheme is as follows, each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4 or sum of digits which are odd in that number is divisible by 3. However to check every car for the above criteria can't be done by the Delhi Police. You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?
Input Format: The first line contains N , then N integers follow each denoting the number of the car.
Sample Input: 2
12345
12134
Output Format: N lines each denoting "Yes" or "No" depending upon whether that car will be allowed on Sunday or Not !
Sample Output: Yes
No
*/


#include<iostream>
using namespace std;

int main(){
    
    int N;
    cin>>N;
    unsigned long long int i;
    unsigned long long int no[N];

    for (int i = 1; i <= N; i++)
    {
        cin>>no[i-1];
    }
    for (int i = 0; i < N; i++)
    {
        int sum_even=0, sum_odd=0;
        while (no[i]!=0)
        {
            int t=no[i]%10;
            if (t%2==0)
            {
                sum_even = sum_even + t;
            }
            else
            {
               sum_odd=sum_odd + t;
            }
                
            no[i]=no[i]/10;
        }

        if (sum_even%4 == 0 || sum_odd%3 == 0)
        {
            cout<<"Yes"<<endl;
        } 
        else
        {
            cout<<"No"<<endl;
        }
            
                
    }
    return 0;
}