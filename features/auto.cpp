#include <iostream>
using namespace std;
// auto detects data type automatically
int main()
{
    auto a = 10;
    auto f = 20.56f;
    auto s1 = "string";

    cout << "int:" << a << "\n";
    cout << "float:" << f << "\n";
    cout << "string:" << s1 << "\n";

    return 0;
}