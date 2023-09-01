#include <bits/stdc++.h>
using namespace std;
void
 solve(vector<int> &nums)
{
    int len = nums.size();
    vector<int> vp;
    vector<int> vn;
    for (int i = 0; i < len; i++)
    {
        if (nums[i] >= 0)
        {
            vp.push_back(nums[i]);
        }
        else
        {
            vn.push_back(nums[i]);
        }
    }

    int jp = 0;
    int jn = 0;
    for (int i = 0; i < len; i++)
    {
        if (i % 2 == 0)
        {
            cout << "value of i and vp and jp are in if condition " << i << " " << vp[jp] << " " << jp << endl;
            nums.push_back(vp[jp]);
            cout << nums[i] << endl;
            jp++;
        }
        else
        {
            cout << "value of i and vn and jn are in else condition " << i << " " << vn[jn] << " " << jn << endl;
            nums.push_back(vn[jn]);
            cout << nums[i] << endl;
            jn++;
        }
        for (int i = 0; i < len; i++)
        {
            cout << nums[i] << " ";
        }
    }
}

// return nums;

int main()
{

    vector<int> nums = {3, 1, -2, -5, 2, -4};
    solve(nums);
}