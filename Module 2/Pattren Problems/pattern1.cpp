#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n, x = 1;
    cin >> n;

    vector<int> v1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            v1.push_back(x);
            x++;
        }
        if (i % 2 == 0)
        {
            reverse(v1.begin(), v1.end());
        }
        for (int k = 0; k < v1.size(); k++)
        {
            cout << v1[k] << " ";
        }
        v1.clear();
        cout << endl;
    }

    return 0;
}