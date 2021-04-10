#include<iostream>

using namespace std;

int main(void)
{
    int a,b;
    float c,d;
    cout<<"Enter 2 integers ";
    cin>>a>>b;
    cout<<"Enter 2 decimal numbers ";
    cin>>c>>d;
    
    int sum_int = a+b;
    float sum_float = c+d;
    cout<<"Sum of integers "<<sum_int<<endl;
    cout<<"Sum of decimal numbers "<<sum_float<<endl;

    int diff_int = a-b;
    float dif_float = c-d;
    cout<<"Difference of integrs "<<diff_int<<endl;
    cout<<"Difference of decimal numbwers "<<dif_float<<endl;

    return 0;

}