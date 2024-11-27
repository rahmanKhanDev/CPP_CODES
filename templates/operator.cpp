#include <iostream>
using namespace std;
// operator overloading (changing the defin of operators)
class Complex
{
private:
    int real;
    int imag;

public:
    // input()
    void input()
    {
        cout << "Enter real part & imaginary part respectively\n";
        cin >> real;
        cin >> imag;
    }

    // operator defn
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    // dipsplay
    void output()
    {
        cout << "Output is:" << real << "+" << imag << "i";
    }
};

int main()
{
    Complex com1, com2, res;
    cout << "Enter first complex number i.e\n";
    com1.input();
    cout<<"Enter second complex number i.e\n";
    com2.input();
    res=com1+com2;// it is like com1.operator+(Comp2)
    res.output();// real + image part of result will be displayed

    return 0;
}