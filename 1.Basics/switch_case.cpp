// Switch Case Statement//

/* Design a menu - where pressing a butoon gives you the corresponding item

B-Burger
P-Pizza
M-Maggi

and so on --- */

#include<iostream>
using namespace std;

int main(){
    
    char ch;
    cin>>ch;

    switch(ch){
        case 'p' :
        case 'P' : cout<<"Pizza"<<endl;
        break;
        case 'm' :
        case 'M' : cout<<"Maggi"<<endl;
        break;
        case 'b' :
        case 'B' : cout<<"Burger"<<endl;
        break;

        default : cout<<"Item not available"<<endl;

     
    }



    return 0;
}