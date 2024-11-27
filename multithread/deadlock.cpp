// this is problem part
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
mutex mtx1;
mutex mtx2;

// resource
void Car1(string driver)
{
    //   mtx1.lock();

    cout << driver << " is driving \n"
         << endl;
    lock_guard<mutex> lg1(mtx2);

    this_thread::sleep_for(chrono::seconds(2));
    lock_guard<mutex> lg2(mtx1);
    cout << driver << " is done driving " << endl;
    //    mtx1.unlock();
}
void Car2(string driver)
{
    cout << driver << " is driving \n"
         << endl;
    //   mtx1.lock();
    lock_guard<mutex> lg1(mtx2);

    this_thread::sleep_for(chrono::seconds(2));
    lock_guard<mutex> lg2(mtx1);
    cout << driver << " is done driving " << endl;
    //    mtx1.unlock();
}

int main()
{

    thread t1(Car1, "Rahman"); // rahman accessing resource
    thread t2(Car2, "Sonu");   // sonu accessing resorce
                               // problem is sonu is accsessing resource while it is already in use by rahman

    t1.join();
    t2.join();
    return 0;
}