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
int flipkZero(vector<int> v, int k)
{
    int count = 0;
    int maxLen = INT_MIN;
    int left_idx = 0;
    int right_idx = 0;
    for (right_idx = 0; right_idx < v.size(); right_idx++)
    {
        if (v[right_idx] == 0)
        {
            k--;
        }
        while (k < 0)
        {
            if (v[left_idx] == 0)
                {k++;}
            left_idx++;
        }
        maxLen = max(maxLen, right_idx - left_idx + 1);
    }
    cout << maxLen;

    
}

int main()
{
    vector<int> v = {1,1,1,0,0,0,1,1,1,1,0};
    //nTimes(v);
    flipkZero(v, 2);
}