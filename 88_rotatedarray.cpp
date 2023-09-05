#include <bits/stdc++.h>
using namespace std;
// int sortin(vector<int> arr)
// {   int ans;
//     int ansm;
//     int n = arr.size();
//     if (arr[0] >= arr[1])
//         ansm = 0;

//     for (int i = 1; i < n - 1; i++)
//     {
//         if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
//         {
//             ans = i;
//             if(arr[ans]>arr[ansm]){
//                 ansm=ans;
//             }
//         }
//     }
//     return ansm;
// }
int search(vector<int> &nums, int target)
{

    int ans = 0;
    int s = 0;
    int e = nums.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
            ans = 1;

        // left side is sorted
        if (nums[s] < nums[mid])
        {
            // figure out if target is in left
            if (nums[s] <= target && nums[mid] >target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        // right half sorted
        else if(nums[s]>nums[mid])
        {
            if (nums[mid] < target && target <= nums[e])
            {
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
        else{s++;}
    }
    return ans;
}
main()
{
    vector<int> n = {1, 0, 1, 1, 1, 1};
    cout << "final answer is " << search(n, 0);
}