#include <bits/stdc++.h>
using namespace std;
// int sortin(vector<int> arr)
// {
//     int ans;
//     int n = arr.size();
//     if (arr[0] >= arr[1])
//         ans= 0;

//     for (int i = 1; i < n - 1; i++)
//         if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
//             ans= i;
//             return ans;
// }
int search(vector<int> &nums, int target)
{
    // int shift = sortin(nums);
    //     cout << "shift statement " << shift << endl;
    //     int len = nums.size();

    //     cout << endl;

    //     int s = 0;
    //     int e = len - 1;

    //     bool ans = 0;
    //     int te = shift;
    //     int ts = shift+1;
    //     bool check = 0;

    //     while (s <= te)
    //     {   int mid = s + (te - s) / 2;
    //        cout << "nothing " << endl;
    //         if (nums[mid] == target)
    //         {   check=1;
    //             ans = 1;
    //             cout<<ans<<endl;
    //             break;
    //         }
    //         if (nums[mid] > target)
    //             te = mid - 1;
    //         else
    //             s = mid + 1;
    //             mid = s + (te - s) / 2;
    //     }

    //     if(check==0){
    //         while (ts <= e)
    //     {    int mid = ts + (e - ts) / 2;
    //         cout << "nothing second " << endl;
    //         if (nums[mid] == target)
    //         {   check=1;
    //             ans = 1;
    //             cout<<ans<<endl;
    //             break;
    //         }
    //         if (nums[mid] > target)
    //             e = mid - 1;
    //         else
    //             ts = mid + 1;
    //             mid = ts + (e - ts) / 2;
    //     }
    //     }

    //     return ans;

    // another method
    int s = 0;
    int e = nums.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
            return mid;
        
            // left side is sorted
            if (nums[s] <= nums[mid])
        {
            // figure out if target is in left
            if (nums[s] <= target && nums[mid] >= target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1
            }
        }
        // right half sorted
        else
        {
            if (nums[mid] <= target && target <= nums[e])
            {
                s = mid + 1;
            }
            else
                e = mid - 1
        }
    }
    return -1;
}
main()
{
    vector<int> n = {2, 2, 2, 3, 2, 2, 2};
    cout << "final answer is " << search(n, 3);
}