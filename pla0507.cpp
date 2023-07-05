#include <bits/stdc++.h>
using namespace std;

void leaderInArray(vector<int> v)
{
    vector<int> ans;
    int leader = INT_MIN;
    for (int i = v.size() - 1; i > 0; i--)
    {
        if (v[i] > leader)
        {
            ans.push_back(v[i]);
            leader = v[i];
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
}




int main()
{
    vector<int> v = {5,3,2,4,2,1};
    leaderInArray(v);
    
   

  

    
}