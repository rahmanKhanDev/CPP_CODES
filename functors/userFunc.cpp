// user defind functor
#include <bits/stdc++.h>
using namespace std;

struct MyFunctor
{
    int operator()(int x)
    {
        cout << "Functor called" << endl;
        return x + 10;
    }
};

int main()
{
    MyFunctor functor;
    // invoke functor
    cout << functor(10);

    return 0;
}