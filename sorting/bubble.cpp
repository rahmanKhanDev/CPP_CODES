#include <iostream>

using namespace std;

int main()
{

    int arr[] = {28, 1, 98, 5, 78, 90, 10, 13, 16, 18, 89, 3, 5, 0}; // unsorted array
    int n = sizeof(arr) / sizeof(arr[0]);                            // size

    // logic
    for (int i = 0; i < n - 1; i++) // passes
    {
        // comparison and swap
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap logic
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // chars
    char ch[] = {'f', 'j', 'k', 'z', 'i', 'a', 'b', 'c', '\0'};
    int size = sizeof(ch) / sizeof(ch[0]);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (ch[j] > ch[j + 1])
            {
                char t = ch[j];
                ch[j] = ch[j + 1];
                ch[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < size - 1; i++)
    {
        cout << ch[i] << " " << endl;
    }

    // optimized
    for (int i = 0; i < n - 1 ; i++) // passes
    {
        // comparison and swap
        for (int j = 0; j < n - 1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap logic
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}