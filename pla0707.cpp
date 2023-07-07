#include <bits/stdc++.h>
using namespace std;

void nTimes(vector<int> v)
{
    int len = v.size();
    map<int, int> mp;
    for (int i = 0; i < len; i++)
    {
        mp[v[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second >= len / 2)
        {
            cout << it.first;
            break;
        }
    }
}



int main()
{
    vector<int> v = {1,1,1,0,0,0,1,1,1,1,0};
    nTimes(v);
    
}