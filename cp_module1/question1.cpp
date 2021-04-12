#include <iostream>
using namespace std;
int main() {
     int num1;
     int num2;
     float num3;
     float num4;
     int add1;
     int diff1;
     float add2;
     float diff2;
     cout<<"Enter two integers in decreasing order:"<<endl;
     cin>>num1>>num2;
     add1=num1+num2;
     diff1=num1-num2;
     cout<<"Sum and Difference of "<<num1<<" and"<<num2<<" is"<<add1<<" and"<<diff1<<" respectively"<<endl;
     cout<<"Enter to number in decresing order:"<<endl;
     cin>>num3>>num4;
     add2=num3+num4;
     diff2=num3-num4;
     cout<<"Sum and Difference of"<<num3<<" and"<<num4<< " is"<<add2<<" and"<<diff2<<" respectively"<<endl;
     return 0;
}
