#include <iostream>
using namespace std;

class Test
{
private:
    string name;
    int age;
    public:
    // setter and getter
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }

    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return age;
    }
};

// main()
int main()
{
    Test t1;
    //setting value
    t1.setName("Joker");
    t1.setAge(24);

    //getting value
   string name= t1.getName();
   int age= t1.getAge();
   cout<<"name:"<<name<<"\t age:"<<age<<endl;
    return 0;
}
