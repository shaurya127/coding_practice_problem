#include<iostream>

using namespace std;

int main(void)
{
    int i,j,n,count=1;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        { 
            cout<<count;
            count++;
         }
        cout<<endl;
    }
    
}