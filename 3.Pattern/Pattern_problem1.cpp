/* Pattern Problem

0
10
010
1010
01010
101010

n=5
- for ith value to print i lines
- print 1 for even rows 
- print 0 for odd rows
*/

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int val=i%2==0?1:0;

        for(int cnt=1;cnt<=i;cnt++){
        cout<<val;
        val=1-val;
        }
        cout<<endl;

    }


    return 0;
}
