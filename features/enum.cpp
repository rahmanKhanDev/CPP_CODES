// user defined enums
//  enum class

#include <iostream>
using namespace std;

//normal enum (not type safe)
// enum Color
// {
//     Red,
//     Blue,
//     Green
// };

// //stronlgy typed (type safe)
enum class Color
{
    White,
    Black,
    yellow,
    Red
};

int main()
{

    // Color color=Red;// normal enum
    // cout << color<<endl;

   //type safe enum

   Color color=Color::White;
   color=Color::Black;

   if(color==Color::White){
    cout<<"White"<<endl;
   }
   else if(color==Color::yellow) {
    cout<<"Yellow"<<endl;
   }
   else{
    cout<<"Black";
   }

    return 0;
}