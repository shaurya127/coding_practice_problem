#include <iostream>
using namespace std;
int main() {
    int num , rev=0, temp, digit;
    cout<<"Enter any number:"<<endl;
    cin>>num;
    temp=num;
    while( num>0)
    { 
     digit=num%10;
     rev=(rev*10)+digit;
      num=num/10;
    }
if( temp==rev){
cout<<"Number is palindrome"<<endl;}
else{
cout<<"Number is not palindrome"<<endl;}
 
}
