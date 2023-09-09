#include <iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int> &nums, int target)
{
    int len = nums.size() - 1;
    // for (int i = 0; i < len; i++)
    // {
    //     if (nums[i] == target)
    //     {
    //         cout << i << endl;
    //         break;
    //     }
    //     else if(i==len-1){
    //         cout<<i+1;
    //         break;
    //     }
    //     else if (nums[i + 1] >= target)
    //     {
    //         cout << i + 1;
    //         break;
    //     }
    // }
    int ans = 0;
    for (int i = 0; i <= len; i++)
    {   cout<<"value of i is  "<<i<<endl;
        if (nums[i] == target)
        {
            ans = i;
            cout << "if condition is executed value of i " <<i<< endl;
            break;
        }
        else if (nums[i] > target)
        {
            ans = i ;
            cout << "first else if condition value of i " <<i<< endl;
            break;
        }
        else if (nums[i] < target && i == len)
        {
            ans = i + 1;
            cout << "second else if condition value of i " <<i<< endl;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    // cout << solve(n);
    vector<int> value = {1, 3, 5, 7};
    cout << searchInsert(value, n);
}