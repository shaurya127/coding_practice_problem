#include <iostream>

using namespace std;

void patrn(int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
            cout<<"* ";
       cout<<"   ";     
    }
}
int main()
{
    int n=5;
    patrn(n);
    return 0;
}
