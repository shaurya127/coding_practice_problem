#include <iostream>
using namespace std;
int main()
{
    int n, rev=0, remainder=0;
    cin >> n;
    int t = n;
    while (t != 0)
    {
        remainder = t % 10;
        rev = rev * 10 + remainder;
        t = t / 10;
    }
    if (n == rev)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
