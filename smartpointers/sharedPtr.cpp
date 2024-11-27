#include <iostream>
#include <memory>
using namespace std;

int main()
{

    shared_ptr<int> ptr1 = make_shared<int>(50);
    cout << "Unique pointer value by ptr1:" << *ptr1 << endl;
    // sharing owenrship
    shared_ptr<int> ptr2 = ptr1; // or ptr(ptr1)
    cout << "Unique pointer value by ptr2:" << *ptr2 << endl;

    return 0;
}