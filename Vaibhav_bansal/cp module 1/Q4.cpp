#include<iostream>

using namespace std;

int oddeven(void)
{
    int n;
    cout<<"Enter any integer ";
    cin>>n;
    if(n%2==0)
    cout<<"Even ";
    else
    cout<<"Odd ";

}
int main(void)
{
    oddeven();
    return 0;
}