#include <bits/stdc++.h>
using namespace std;

long long subArrayRanges(vector<int> &nums)
{
    int n = nums.size();
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        int l = INT_MIN;
        int s = INT_MAX;
        for (int j = i; j < n; j++)
        {
            l = max(l, nums[j]);
            s = min(s, nums[j]);
            sum += (l - s);
        }
    }
    return sum;
}
int main()
{
    vector<int> v = {1, 2, 3};
    cout << subArrayRanges(v);
}
