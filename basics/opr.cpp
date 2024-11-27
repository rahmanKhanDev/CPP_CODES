#include <iostream>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
    if (60 <= marks && marks<70)
    {
        cout << "you passed with 'D' grades" << endl;
    }
    else if (70 <= marks && marks< 80)
    {
        cout << "you passed with 'C' grades" << endl;
    }
    else if (80 <= marks && marks< 90)
    {
        cout << "you passed with 'B' grades" << endl;
    }
    else if (90 <= marks && marks<100)
    {
        cout << "you passed with 'A' grades" << endl;
    }
    else
    {
        cout << "you failed" << endl;

    }
       return 0;
}