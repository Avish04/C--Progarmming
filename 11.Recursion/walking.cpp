#include<iostream>
using namespace std;

void reachHome(int posi, int dest){
    cout<<"posi"<<posi <<" "<< "dest" <<dest<<endl;
    // base class
    if (posi==dest)
    {
        cout<<"Reached Home"<<endl;
        return ;
    }
    // Processing
    posi++;
    // R call
    reachHome(posi,dest);
    

    
}

int main(){
    
    int dest=10;
    int posi=1;

    reachHome(posi,dest);


    return 0;
}