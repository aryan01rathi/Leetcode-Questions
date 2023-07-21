#include <bits/stdc++.h>
using namespace std;

void solve()
{
     string s;
    cin>>s;
    int max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] > max)
        {
            max = s[i];
        }
        
    }
    cout << max-48<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
   
}