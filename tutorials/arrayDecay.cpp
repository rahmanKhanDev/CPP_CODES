#include<iostream>
using namespace std;

// function1 takes array as parameter
// void function1(int arr[]){
//     // getting size of func1.arr[]
//     cout<<"size of function1.arr[] is:"<<sizeof(arr)<<endl;

// }

//function2 takes array as pointer
void function2(int *arr){
//size of arr
cout<<"size of function2.*arr:"<<sizeof(arr)<<endl;
}

//main()
int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<"original size of arr in main():"<<sizeof(arr)<<endl;

    //invoke function1()
   // function1(arr);
    //invoke function2(
    function2(arr);

    return 0;
}