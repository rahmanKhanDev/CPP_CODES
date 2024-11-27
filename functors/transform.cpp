// it is in STL predeifned logic to transform range of data to range

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // vector
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    vector<int> result(vec.size());
    // apply transform using lambda
    transform(vec.begin(), vec.end(), result.begin(), [](int x)
              { return x + 1; });

    // access new vector
    for (int v : result)
    {
        cout << v << " ";
    }

    return 0;
}
