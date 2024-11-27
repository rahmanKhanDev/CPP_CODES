#include<iostream>
using namespace std;


void autoStorageClass(){
    // auto default 
    int a=10;
    string s1="welcome";
    char ch='A';
    float f=37.8;
   cout<< a <<endl;
   cout<< s1<<endl;
   cout<<ch<<endl;
   cout<<f<<endl;

}

//static storage class
int staticFunc(){
    cout<<"For static Storage class"<<endl;
    static int count=0;
    count++;
    
    return count;//value will be preserved in second iteration
}

// for non static
int nonStaticFunc(){
    cout<<"for non static"<<endl;
    int count=0;
    count++;
    return count;// starts from inital value whenever called

}
int main(){
  //  autoStorageClass();
cout<<staticFunc()<<endl;
cout<<staticFunc()<<endl; 

cout<<nonStaticFunc()<<endl;
cout<<nonStaticFunc()<<endl;

    return 0;
}