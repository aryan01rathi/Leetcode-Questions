#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;

    // Reverse the string P
    reverse(P.begin(), P.end());

    // If S is equal to P
    if (S == P)
    {
        // Return "Yes"
        return 1;
    }
    // Otherwise
    else
    {
        // return "No"
        return 0;
    }
}
void solve()
{
    int n, k, j;
    cin >> n >> k;
    string s;
    cin >> s;
    int b = s.length() / 2;
    if (isPalindrome(s) == 1)
    {
        cout << "Yes";
    }
    else
    {
        if (k != 0)
        {
            for (int i = 0, j = k; i < b && j > 0;)
            {
                if (s[i] == s[s.length()-1])
                {
                    i++;
                }
                else
                {
                    s[s.length()-1] = s[i];
                    j--;
                    i++;
                }
            }
        }
    }
    if (isPalindrome(s) == 1)
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO"<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}