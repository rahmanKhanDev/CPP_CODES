#include <iostream>
using namespace std;

struct employee
{
  int eId;
  string name;
  int salary;
  // string favColors[];
};

int main()
{
  struct employee rahman; // structure ref
  struct employee sandhya;
  // assign values to employee rahman
  rahman.eId = 101;
  rahman.name = "rahman khan";
  rahman.salary = 9870;
  // rahman.favColors = {"white", "black", "red"};
  sandhya.eId = 3106;
  sandhya.name = "sandhya";
  sandhya.salary = 5000;
  // access values of employee rahman
  cout << "emp id:" << rahman.eId << "\n"
       << "emp name:" << rahman.name << "\n"
       << "emp salary:" << rahman.salary << "\n";
  cout << "emp id:" << sandhya.eId << "\n"
       << "emp name:" << sandhya.name << "\n"
       << "emp salary:" << sandhya.salary << "\n";
  // int size=sizeof(rahman.favColors)/sizeof(rahman.favColors[0]);

  return 0;
}
