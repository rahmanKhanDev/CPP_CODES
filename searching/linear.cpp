// linear search
#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int target)
{
    int i = 0;
    for (i; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Target found at index:" << i << endl;
            break;
        }
    }
    if (i == size)
    {
        cout << "Target not found" << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int target = 5;
    linearSearch(arr, 5, target);

    // or
    int i = 0;
    string s1 = "Sonu Khan";
    char ch = 'a';
    for (i; i < 6; i++)
    {
        if (s1[i] == ch)
            cout << "Char found at position:" << i + 1 << endl;
        break;
    }
    if (i==6){
        cout<<"Char not found";
    }

        return 0;
}