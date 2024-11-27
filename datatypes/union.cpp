#include <iostream>
using namespace std;

// union
union Data
{
    // data members
    int i;
    float f;
    // memeber function()
    void display()
    {
        cout << "integer:"<<i << endl;
    }
};

int main()
{
    Data d;
    d.i=20;
    //invoke display()
    d.display();

    //float assignment
    d.f=45.98f;
    cout<<"float:"<<d.f<<endl;

    return 0;
}