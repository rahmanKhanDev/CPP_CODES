#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // constants
    int a=10;
    a=20;//updation allowed
    const int b=10;
    const float pi=3.14f;
//    b=30;//not allowed


// manipulators
//endl, setw(num)

int x=20;

cout<<"without menipulators:"<<x<<endl;
cout<<"without menipulators:"<<x<<endl;

cout<<"with manipulators:"<<setw(4)<<x<<endl;
cout<<"with manipulators:"<<setw(10)<<x<<endl;


//

    return 0;
}