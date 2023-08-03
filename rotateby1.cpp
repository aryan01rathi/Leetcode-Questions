#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums)
{
    int len = nums.size();
    vector<int> v(len + 1, 0);

    int k = nums[len - 1];
    for (int j = 0; j < len; j++)
    {
        v[j] = nums[j - 1];
    }
    v[0] = k;

    for ( int i=0;i<len;i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
    // int n;
    // cin >> n;
    vector<int> v = {1,2,3,4,5};
    solve(v);
}