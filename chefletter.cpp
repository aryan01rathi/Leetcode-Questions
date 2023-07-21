#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    for( int i=0;i<s.length();i++){
        if(s[i]=='_'){s[i]=' ';}
        else if (s[i]=='1'){s[i]='2';}
       

    }
    cout<<s<<endl;

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