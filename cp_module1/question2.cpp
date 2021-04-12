#include <iostream>
#include <string>
using namespace std;
int main()
{
    int lower_limit;
    int upper_limit;
    int num;
    cout<<"Enter two integer in increasing order:";
    cin>>lower_limit>>upper_limit;
    
    int i {0};
    string english[] {"one" , "two" , "three" , "four", "five", "six" , "seven" , "eight" , "nine" };
    for ( i=lower_limit;i<=9;i++){
    cout<<english[i-1]<<endl;}
    for ( i=10; i<=upper_limit;i++)
        if(i%2==0)
            cout<<"even"<<endl;
            else
                cout<<"odd"<<endl;
        
        }
