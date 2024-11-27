// printing machine (handle error) if page is not enough
#include <iostream>
using namespace std;

// Printer class
class Printer
{
    string _name;    // printer name
    int _availPaper; // avialable paper
public:
    // Constructor
    Printer(string name, int paper)
    {
        _name = name;
        _availPaper = paper;
    }

public:
    // printing text doc
    void print(const string textDoc)

    {

        int requiredPage = textDoc.length() / 10; // 40/10=4 pages
        if (requiredPage > _availPaper)
        {
            throw "No Pages Left"; // throw exception if page is not available

        }
        cout << textDoc << endl;
        _availPaper -= requiredPage;
        cout << "Page left:" << _availPaper << endl;
    }
};

// main
int main()
{
    Printer printer1("Hp printer 101", 20);
    try
    {
        printer1.print("Hello, My name is Rahman Khan and I am a Softwear Devloper");

        printer1.print("Hello, My name is Rahman Khan and I am a Softwear Devloper");
        printer1.print("Hello, My name is Rahman Khan and I am a Softwear Devloper");
        printer1.print("Hello, My name is Rahman Khan and I am a Softwear Devloper");
        printer1.print("Hello, My name is Rahman Khan and I am a Softwear Devloper");
        printer1.print("Hello, My name is Rahman Khan and I am a Softwear Devloper");
        printer1.print("Hello, My name is Rahman Khan and I am a Softwear Devloper");
        printer1.print("Hello, My name is Rahman Khan and I am a Softwear Devloper");
    }
    catch (const char *exception)
    {
        cout << "Exception:" << exception << endl;
    }
    catch (...)
    {
        cout << "Exception happend!\n";
    }
    return 0;
}