#include <iostream>
#include <string>
using namespace std;

// class definition
class Student
{
    // member variables
public:
    int id;
    string name;
    string course;
    float marks;

    // assignment
    // parameterized constructor
    Student(int id, string name, string course, float marks)
    {
        cout << "Student(id,name,course,marks) called:" << endl;
        this->id = id;
        this->name = name;
        this->course = course;
        this->marks = marks;
    }

    // parameterized constructor with 2 paras
    Student(int d1, string s1)
    {
        cout << "Student(id,name) called:" << endl;
        id = d1;
        name = s1;
    }

    // default constructor
    Student()
    {
        cout << "Student() called:" << endl;
    }

    // copy constructore(deep copy-> memory is different , shallow copy-> same memory)
    // shallow
    Student(Student &student)
    {
        cout << "Copy constructor called:" << endl;
        id = student.id;
        name = student.name;
        course = student.course;
        marks = student.marks;
    }

    // access memeber variables
    void display()
    {
        cout << "id:" << id << "\nname:" << name << "\ncourse:" << course << "\nmarks:" << marks << endl
             << endl;
    }
};

int main()
{
    Student sonu(101, "Sonu", "CSE", 89.98); // creating object
    sonu.display();
    Student arvind(102, "Arvind", "MECH", 78.67);
    arvind.display();

    Student s1;
    s1.id = 103;
    s1.name = "Vishal";
    s1.course = "CIVIL";
    s1.marks = 76.90;
    s1.display();

    Student s2(105, "Rahman");
    s2.course = "IT";
    s2.marks = 98.78;
    s2.display();

    Student copyObj = sonu;
    copyObj.name="Monu";
    copyObj.display();

    return 0;
}