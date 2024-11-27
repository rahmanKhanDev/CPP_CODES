#include <iostream>
#include <memory>
using namespace std;

int main()
{

    unique_ptr<int> ptr1 = make_unique<int>(50);
    unique_ptr<int> ptr2=move(ptr1);//owernship divided
    cout << "Unique pointer value is:" << *ptr1 << endl;

    return 0;
}