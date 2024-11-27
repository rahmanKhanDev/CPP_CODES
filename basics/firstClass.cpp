#include<iostream>
using namespace std;
//class defined
class Calculate{
    //data memeber
public:
int num1=20;
int num2=40;
// memeber function
int addition(){
    int result=num1+num2;
    cout<<result<<endl;

}
};

//main method
int main(){
    //object declaration
    Calculate add;
    //calling method
    add.addition();
    return 0;
}


