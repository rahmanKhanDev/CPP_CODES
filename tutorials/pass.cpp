#include <bits/stdc++.h>
using namespace std;

// pass by value
int square1(int n1)
{
    cout << "Address of n1 in square1():" << &n1 << endl;
    n1 *= n1;
    return n1;
}

// pass by refrence
int square2(int &n2)
{
    cout << "Address of n2 in square2():" << &n2 << endl;
    n2 *= n2;
    return n2;
}

// pass by pointers
int square3(int *n3)
{
    cout << "Address of n3 in square3():" << n3 << endl;
    *n3 *= *n3;
    return *n3;
}

int main()
{
    // invoke square1()
    int n1 = 8;
    cout << "Adress of n1 in main():" << &n1 << endl;
    cout << "square of n1:" << square1(n1) << endl;
    cout << "No chnage in n1 internally:" << n1 << endl;

    // invoke square2()
    int n2 = 8;
    cout << "Address of n2 in main():" << &n2 << endl;
    square2(n2);
    cout << "square of n2:" << n2 << endl;
    cout << "change in n2 is:" << n2 << endl;

    // invoke square3()
    int n3=8;
    cout<<"Address of n3 in main():"<<&n3<<endl;
    square3(&n3);
    cout<<"Square of n3 is:"<<n3<<endl;
    cout<<"Change in n3 is:"<<n3<<endl;

    return 0;
}