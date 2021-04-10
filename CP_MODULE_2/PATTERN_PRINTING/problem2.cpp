#include <iostream>
using namespace std;

int main()
{
    int test_case = 0;
    cout << "Enter the number of test cases: ";
    cin >> test_case;
    int l = 0;
    int c = 0;
    for (int i = 1; i <= test_case; i++)
    {
        cout << " Enter the number of lines and the number of columns separated by space: ";
        cin >> l >> c;
        for (int i = 1; i <= l; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                if (i % 2 != 0 && j % 2 != 0)
                    cout << "*";
                else if (i % 2 != 0 && j % 2 == 0)
                    cout << ".";
                else if (i % 2 == 0 && j % 2 != 0)
                    cout << ".";
                else if (i % 2 == 0 && j % 2 == 0)
                    cout << "*";
            }
            cout << endl;
        }
    }
}