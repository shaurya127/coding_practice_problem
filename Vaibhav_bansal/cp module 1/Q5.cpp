#include<iostream>

using namespace std;
int is_palindrome(int n)
{ 
   int r,sum=0,temp;     
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
cout<<"palindrome number ";    
else    
cout<<"not palindrome";   
return 0; 
} 

int main(void)
{
  int N;
  cout<<"Enter any integer ";
  cin>>N;
  is_palindrome(N);

  return 0;
}