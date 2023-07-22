#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    string s;
    cin >> s;
    int countC=0;
    int countN=0;
    for (int i = 0; i < 14; i++)
    {
        if (s[i] == 'C')
        {
            countC += 2;
            // cout<<"carlsen "<<countC<<endl;
        }
        else if (s[i] == 'N')
        {
            countN += 2;
            // cout<<"chef "<<countN<<endl;
        }
        else
        {
            countC += 1;
            countN += 1;
            // cout<<"chef "<<countN<<endl;
            // cout<<"carlsen "<<countC<<endl;
        }
    }
    
    if (countC == countN)
    {
        cout << 55 * x<<endl;;
    }
    else if (countN > countC)
    {
        cout << 40 * x<<endl;;
    }
    else
        cout << 60 * x<<endl;;
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