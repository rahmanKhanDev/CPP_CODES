#include <iostream>
using namespace std;

// Templates is like generic , it will work on multiple data types
//  defining a function template

template <class T>
T sum(T num1, T num2)
{
    // sum
    T result = num1 + num2;

    return result;
}

// template funct for array type data
template <class T>
T accept(T arr, int size)
{
    //  cout<<"accept:"<<sizeof(arr)<<endl;
    // int size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int a = 20, b = 40;
    // invoke sum() for int
    cout << sum(a, b) << endl;

    float f1 = 20.78, f2 = 98.78;
    // invoke sum for float
    cout << sum(f1, f2) << endl;

    // array
    int arr[5] = {1, 2, 3, 4, 5};
    // cout<<"main:"<<sizeof(arr)<<endl;
    int size = sizeof(arr) / sizeof(arr[0]);
    //passing arr, size 
    // invoke accept()
    accept(arr, size);

    return 0;
}