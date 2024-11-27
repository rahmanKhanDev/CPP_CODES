//class

#include<iostream>
using namespace std;

class UserData{
    //access modifier
    public:
//member variables
string s1;
//member function
void print(){
    cout<<s1<<endl;

}

};
// main method
int main(){
UserData obj1;
//initialize s1
obj1.s1="This is member variable";

//invoke print()
obj1.print();

//exit execution
return 0;

}