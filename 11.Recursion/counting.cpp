#include<iostream>
using namespace std;

int print(int n){

    if(n==0){
    return 1;
}
cout<<n<<endl;
print(n-1);
}

int main(){
    int n;
    cin>>n;

    int ans=print(n);
    cout<<ans<<endl;


    return 0;
}