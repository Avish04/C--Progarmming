/* Problem Name: Check prime
Problem Difficulty: None
Problem Constraints: 2 < N <= 1000000000
Problem Description:
Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".
Input Format: 
Sample Input: 3
Output Format: 
Sample Output: Prime */


#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;

  cin >> n;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}


    
    
        
        


    


    