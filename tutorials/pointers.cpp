#include<iostream>
using namespace std;

int main(){
    string s1="welcome";
    string *p=&s1;



    cout<<"value at p is "<<*p<< endl;
    cout<<"address of s1 is:"<<p<<endl;

//pointer to pointer
string **p2=&p;
cout<<"addres of pointer p is:"<<p2<<endl;
cout<<"value of at pointer p is"<<*p2<<endl;// will give addres only


    return 0;
}