#include<iostream>

using namespace std;

float multiplication(void);
int main(void)
{
    float product;
  product = multiplication();
  cout<<product; 

  return 0;
}

float multiplication(void)
{
    float a,b;
    cout<<"Enter any 2 numbers ";
    cin>>a>>b;
    return a*b;
}