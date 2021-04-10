#include<iostream>
#include<conio.h>

using namespace std;

void printpattern( int N);
int main(void)
{   
   
    int n; 
    system("cls");
    cout<<"ENter n ";
    cin>>n;
    printpattern(n);
}

void printpattern( int N) 
{
    int i,j;
    for(i=1; i<=N; i++)
     {
         for(j=1; j<=i; j++)
         {
             cout<<"*";
         }
         cout<<" ";
     }
}