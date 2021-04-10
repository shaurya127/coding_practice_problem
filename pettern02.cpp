// nilesh s prajapati
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    // cout<<"test cases";
    int r[t], c[t];
    // cout<<"nn";
    for (int i = 0; i < t; i++)
    {
        cin >> r[i] >> c[i];
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < r[i]; j++)
        {
            for (int k = 0; k < c[i]; k++)
            {
                if (((j + k) % 2) == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }
    return 0;
}