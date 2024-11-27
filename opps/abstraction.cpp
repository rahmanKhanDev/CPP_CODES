#include <iostream>
using namespace std;

// base class
class Shape
{
    // virtual function
public:
    virtual void display() = 0;
};

// derived class
class Circle : public Shape
{
    // override vitual function
    void display() override
    {
        cout << "This is implemention of abstraction through virtual functions." << endl;
        cout << "This is circle shape" << endl;
    }
};

// main()
int main()
{
    // obj refrence
    Shape *shape1 = new Circle();
    shape1->display();

    return 0;
}