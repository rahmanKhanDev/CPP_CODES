#include<iostream>
using namespace std;

//declaring sum method
int sum(int a, int b){
    int result=a+b;
    return result;
}

 // main method
int x=90;
int main(){
    // access local variable result (through error)
    //cout<<result<<endl;
    int x=20;
    cout<<"Global varibale: "<< ::x<<endl;
    cout<<"local variable: "<<x;
    return 0;
}

