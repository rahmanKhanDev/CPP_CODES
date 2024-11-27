#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array:" << endl;
    cin >> n;

    // malloc()
    int *ptr;
   // ptr = (int *)malloc(n * sizeof(int));
   //calloc
      ptr=(int*)calloc(n,sizeof(int));
    // assign value
   
    for(int i=0;i<n;i++){
         cout << "enter " << i << " no value" << endl;
        cin>>ptr[i];
    }


    // traversal
    for(int i=0;i<n;i++){
        cout<<"value at "<<i<<" is:"<<ptr[i]<<endl;
    }
   return 0;
}