// plus() and minus() utilites funtions
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 20;
    plus<int> add;
    minus<int> sub;
    cout <<"sum is:"<<add(a,b)<<"\n";
    cout<<"sub is:"<<sub(a,b);

    return 0;
}