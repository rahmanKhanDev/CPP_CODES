#include <iostream>

void printFirstElement(int* arr) {
    std::cout << "First element: " << arr[0] << std::endl;
     std::cout << "Second element: " << arr[1] << std::endl;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Pointer to the first element
    int* ptr = arr;
    std::cout << "Using pointer: " << ptr[0]<< std::endl; // Output: 20

    // Pointer to the entire array
    int (*ptrToArray)[5] = &arr;
    std::cout << "Using pointer to array: " << (*ptrToArray)[1] << std::endl; // Output: 20

    // Passing array to function (array decays to pointer)
    printFirstElement(arr);  // Output: 10

    return 0;
}
