#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 15, 18, 19, 78, 90, 109, 190, 199}; // array has to be sorted
    int n = 9, target = 890;
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            cout << "Target found at position:" << mid + 1 << endl;
            break;
        }
        else if (target < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    if (left > right)
    {
        cout << "Target not found" << endl;
    }

   
    return 0;
}