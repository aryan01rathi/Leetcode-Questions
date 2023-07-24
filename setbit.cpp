#include <bits/stdc++.h>
using namespace std;

int countSetBits(int N)
{
    unordered_map<int,int>mp;
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        int m = i;
        // this loop will check for the set bits
        
        while (m)
        {
            // this line will clear the leas significant bit
            m &= (m - 1);
            count++;
        }
        mp[m]=count;

        
    }
    return count;
}

int main()
{
    //cout<<countSetBits(7);
     int ans=7&1;
     cout<<ans;
}