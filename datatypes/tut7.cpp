#include<iostream>
using namespace std;

float global=76.8f;//global variable
//main
int main(){
    // built in data types and literals
// float f1=34.4;
// float f2=34.4f;
// double d1=34.4;
// double d2=34.4L;
// cout<<"size of 34.4 is "<<sizeof(f1)<<endl<<"size of 34.4f is "<<sizeof(f2)<<endl<<"size of 34.4 as double is "<<sizeof(d1)<<endl<<"size of 34.4L is "<<sizeof(d2)<<endl;
// double num;
// cout<<"Enter a number"<<endl;
// cin>>num;
// cout<<"The numbr is "<<num<<endl<<"and size is "<<sizeof(num)<<endl;
// cout<<"Global variable is:"<<::global<<endl<<endl<<endl;


//refrence variables
int x=20;
cout<<x<<endl;
int &y=x;
cout<<y<<endl;



//type casting
int a=20;
float b=67.56f;

cout<<"values of a is:"<<a<<endl;
cout<<"and size of a is:"<<sizeof(a)<<endl;

cout<<"value of b is:"<<b<<endl;
cout<<"and size of b is:"<<sizeof(b)<<endl;

//conversion
cout<<"value of a as float:"<<(float)a<<endl;
cout<<"size of int(b)"<<sizeof(int(b))<<endl;

//some expression
cout<<"expresion is (a+b):"<<a+b<<endl;
cout<<"expression is (a+(int)b):"<<a+ int(b)<<endl;

return 0;
}