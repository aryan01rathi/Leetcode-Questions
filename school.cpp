#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool ans = 0;
    
    for (int i = 0; i < s.length();)
    {
        if (s[i] == 'T')
        { 
            i++;
           
            if (s[i] == 'M' && (i < s.length()))
            {  
                i++;
              
                if (s[i] == 'T' && (i < s.length()))
                {  
                    ans = 1;
                    i++;
                   
                }
            }
        }
        else
        {
            i++;
            ans = 0;
        }
    }
    if(ans==0)cout<<"NO"<<endl;
    else{cout<<"YES"<<endl;}
    
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