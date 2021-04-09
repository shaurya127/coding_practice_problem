// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#include <vector>

class Solution
{
public:
    string is_palindrome(int n)
    {
        // Code here.
        string str = "Yes";
        vector<int> v1;
        while (n != 0)
        {
            v1.push_back(n % 10);
            n /= 10;
        }
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] != v1[v1.size() - i - 1])
            {
                str = "No";
                break;
            }
        }
        return str;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Solution ob;
        string ans = ob.is_palindrome(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends