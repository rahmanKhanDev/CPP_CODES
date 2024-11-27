#include <iostream>
using namespace std;

// managing memory through constructor and destructor
class Wrapper
{
private:
    int *value; // memeber variable

public:
    // constructor
    Wrapper(int *a) : value(a)
    {
        cout << "Inside construtor" << endl;
    }

    // destructor
    ~Wrapper()
    {
        cout << "Inside destructor" << endl;
        delete value;
    }
};

// main
int main()
{
    Wrapper obj(new int(20));
    return 0;
}