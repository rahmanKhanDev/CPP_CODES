#include<iostream>
using namespace  std;

class StatictestClass{
    public:
    static int i;
    StatictestClass(){
        // do nothing
    }

};

int StatictestClass::i= 20;

int main(){
    StatictestClass obj1;
     StatictestClass obj2;
    // obj1.i=10;
    // obj2.i=20;

    // //print values
    // cout<<obj1.i <<" "<< obj2.i;
    cout<< obj1.i<<endl;

}