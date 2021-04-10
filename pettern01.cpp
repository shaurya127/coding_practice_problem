// nilesh s prajapati
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int j,m=0;
    int k = 1, p = 1;
    for (int i = 0; i < t; i++)
    {

        if (((i % 2) == 0 && i!=0) || i==4)
        {
            p = p + i;
            for (j = 0; j <= i; j++)
            {
                cout << p << " ";
                p--;
                k++;
            }
          
        }
        else
        {
            for (j = 0; j <= i; j++)
            {
                cout << k << " ";
                 k++;
                // p++;
            }
            p=k;
            
        }
        cout << endl;
    }
    return 0;
}
