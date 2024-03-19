/*Problem Name: Count Digits
Problem Difficulty: None
Problem Constraints: 0 <= N <= 1000000000 
0 <= Digit <= 9
Problem Description:
Take the following as input.  
A number  
A digit  
Write a function that returns the number of times digit is found in the number. Print the value returned.
Input Format: Integer (A number) 
Integer (A digit)
Sample Input: 5433231 
3
Output Format: Integer (count of times digit occurs in the number)
Sample Output: 3
*/



#include <iostream>
using namespace std;

int noDigit(int n , int digit)
{
    int count = 0;
    
    while(n!= 0)
    {
        if(digit == n % 10)
        {
            count += 1;
        }
        
        n = n / 10;
    }
    
    return count;    
}

int main() {
    
    // write digits
    int  n;
    cin >> n;

    // write no.to be searched that repeated for no. of times.  
    int digit;
    cin >> digit;
    
    // function call
    cout << noDigit(n,digit);
    return 0;
}