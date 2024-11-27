#include <iostream>
using namespace std;

int main()
{
    // c-style string
    //  char s1[4]="sonu";// through error size is 4 last one is for '/0'
    char s1[5] = "sonu";
    char s2[] = "sonukhan";
    char s3[] = "sonu khan"; // with space
    char s4[]={'s','o','n','u','\0'};//always end with '\0' null char otherise garbage value will come

    cout << s1 << "\n";
    cout << s2 << "\n";
    cout << s3<<"\n";
    cout<<s4<<"\n";


    //cpp style use string class
    cout<<"cpp style\n";
    string str1="Sonu Khan";
    string str2("Rahman Khan");
    cout<<str1<<"\n";
    cout<<str2<<"\n";

//     string str3;
//     cout<<"enter a string\n";
//    // cin>>str3;// terminates as soon as it gets space
//     cout<<str3<<"\n";

    string str4;
    cout<<"enter another string\n";
    getline(cin,str4);// will take spaces also
    cout<<str4<<"\n";

    //string in pointers
    string str5="Welcome Sonu Khan";
    //pointer char type
    char* p=&str5[0];
    // run till not find null char
    while(*p !='\0'){
        cout<<*p;
        p++;
    }
    return 0;
}