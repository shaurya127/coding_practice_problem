#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int i = 1;
    if (i == 1)
    {
        for (int j = 1; j <= N; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                cout << "*";
            }
            cout << " ";
        }
    }
}
