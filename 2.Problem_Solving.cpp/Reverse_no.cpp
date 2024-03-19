/* Problem Name: Print reverse
Problem Difficulty: 1
Problem Constraints: 0 <= N <= 1000000000
Problem Description:
Take N as input, Calculate it's reverse also Print the reverse.
Input Format: 
Sample Input: 123456789
Output Format: 
Sample Output: 98765432 */

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    
    int n, reverse_no=0,remainder;
    cin>>n;
    
    while (n!=0)
    {
        remainder=n%10;
        reverse_no = reverse_no *10 + remainder; 
    
        n=n/10;
    }

    cout<<reverse_no<<endl;
    

    






    return 0;
}