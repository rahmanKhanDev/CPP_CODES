#include<iostream>
#include<vector>
using namespace std;

int main(){
//vector
vector<int> vec={1,2,3,4,5,6};

// for(int i=0;i<5;i++){

// }

//range basd for loop
for(const auto  var:vec){
    
    cout<<var<<"\n";
}


return 0;
}