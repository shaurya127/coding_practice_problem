#include <iostream>
using namespace std;
int main() {
    int n, rev=0, q, rem;
    cout<<"n = "<<endl;
    cin>>n;
    q=n;
    while( n != 0)
    { 
     rem=n%10;
     rev=(rev*10)+rem;
      n /= 10;
    }
if( q==rev){
cout<<"yes"<<endl;}
else{
cout<<"no"<<endl;}
 
}