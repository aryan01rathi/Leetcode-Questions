#include <bits/stdc++.h>

using namespace std;
int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
        maxi = max(maxi, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}
int main()
{
    // int n;
    // cin >> n;
    // cout << solve(n);
    vector<int> value = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(value);
}