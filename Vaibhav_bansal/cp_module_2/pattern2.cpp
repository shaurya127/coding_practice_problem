#include<iostream>

using namespace std;

int main(void)
{   
    system("cls");
    int i,j,t,l,c,k;
    cout<<"Enter t ";
    cin>>t;

    for(k=1; k<=t; k++ )
    {  
        cin>>l>>c;
    for(i=1; i<=l; i++)
    {
        for(j=1; j<=c; j++)
       {    if((i+j)%2==0)
           cout<<"*";
           else
           cout<<".";
       } 
       cout<<endl;
    }
    }    
   return 0; 
}