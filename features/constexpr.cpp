// constexpr make sure that value is computed at compile time

#include<iostream>
using namespace std;


// add fucntion
constexpr int add(int a, int b){
    return a+b;
}

int main(){
    constexpr int result=add(10,20);
    cout<<"sun is:"<<result;

    return 0;
}