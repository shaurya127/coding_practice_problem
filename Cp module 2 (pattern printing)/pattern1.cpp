#include <iostream>
using namespace std;
int main()
{
    int n, a = 1,p=1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0  )
        {
                p=p+i;
            for (int k = 0; k <= i; k++)
            {
                cout<<p<<" ";
                p--;
                a++;
            }
            
        }
        else
        {
           
            for (int k = 0; k <= i; k++)
            {
                cout << a << " ";
                a++;
            }
            p=a;
        }
            cout << endl;
    }
}
