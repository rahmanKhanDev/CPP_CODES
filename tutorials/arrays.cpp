#include<iostream>
using namespace std;
int main(){
    //declare array
    int marks[]={78,98,58,90,76};
    int mathMarks[5];
    //assign mathmarks
    mathMarks[0]=89;
    mathMarks[1]=79;
    mathMarks[2]=67;
    mathMarks[3]=30;
    mathMarks[4]=56;
    
 
    //  access marks with loops
    for(int i=0;i<=4;i++){
       // cout<<"value of marks at "<<i<<" is:"<<marks[i]<<endl;
    }
    cout<<"\n\n";
//access mahsMarks 
for(int i=0;i<=4;i++){
    if(i==1){
        //updating at index 1
        mathMarks[i]=90;
    }
        //printing values
       // cout<<"value of mathMarks at "<<i<<" is:"<<mathMarks[i]<<endl;
}

//pointer with arrays
int *ptr=marks;
cout<<"marks[0]/ptr[0] "<<*ptr<<endl;
cout<<"marks[1]/ptr[1] "<<ptr[1]<<endl;//or
cout<<"marks[1]/ptr[1] "<<*(ptr+1)<<endl;
cout<<"marks[1]/ptr[1] " <<ptr[0]<<endl;
return 0;
}