// lambda function
#include <iostream>
using namespace std;

int main()
{
    // lambda with no parameter

    auto greet = []()
    {
        cout << "hello from lambda function" << endl;
    };
    // invoke greet
    greet();
    // lambda with para meters
    auto add = [](int a, int b)
    {
        return a + b;
    };

    // invoke add
    cout << "Sum is:" << add(20, 20) << endl;

    // accepting variabless fom surroundings

    int x = 20;
    // internally x will be const to avoid this keep it (mutable)
     auto suqare = [ &x]() 
    {
        x = 10;
        return x * x;
    };

    cout << suqare() << "\n";
    cout << x;
    return 0;
}