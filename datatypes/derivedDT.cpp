// derived Data Types are 
// Array
// Function
// Pointer
// References

// Array

#include<iostream>
using namespace std;

//functions
int cube(int num1){
    int result=num1*num1*num1;
    return result;
}

int main(){
int arr[5]={1,2,3,4,5};// 1d array
for(int i=0; i<=4;i++){
    cout<<arr[i]<<endl;
}
int result=cube(5);
cout<<"cube of 5 is:"<<result<<endl;

return 0;
}


