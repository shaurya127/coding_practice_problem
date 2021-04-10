#include <iostream>
using namespace std;
int main(){
    int num1,rev=0,num2,num3;
    cout<<"Enter a number: ";
    cin>>num1;
    num2=num1;
    while(num1!=0)
    {num3=num1%10;
    rev=(rev*10)+num3;
    num1=num1/10;
    }
    if(num2==rev){
        cout<<"The given number is palindrome"<<endl;
    }
    else{
         cout<<"The given number is not a palindrome"<<endl;
    }
}