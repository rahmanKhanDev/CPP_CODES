#include <iostream>
using namespace std;

// class template
template <class T>
class Number
{
private:
    T num1, num2;

    // assignment
public:
    Number(T num1, T num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    // compare numbers
    void compare()
    {
        if ((num1 > num2))
        {
            cout << "num1 is greater" << endl;
            cout << num1;
        }
        else
        {
            cout << "num2 is greater" << endl;
            cout << num2;
        }
    }
};

// main()
int main()
{
    Number<int> number1(90, 50);
    // invoke compare()
    number1.compare();

    return 0;
}