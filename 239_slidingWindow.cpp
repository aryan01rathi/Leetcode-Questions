#include <bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    deque<int> dq;
    vector<int> v;
    for (int i = 0; i < nums.size(); i++)
    {
        if (!dq.empty() && dq.front() == i - k)
            dq.pop_front();

        while (!dq.empty() && nums[dq.back()] < nums[i])
            dq.pop_back();

        dq.push_back(i);
        if (i >= k - 1)
            v.push_back(nums[dq.front()]);
    }
    return v;
}
int main()
{
    vector<int> v = {1,3,-1,-3,5,3,6,7};
    vector<int> a;
    a = maxSlidingWindow(v,3);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}