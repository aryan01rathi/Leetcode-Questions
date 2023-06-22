#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
int main()
{
    vector<int> v = {1,1,2};
    cout<<removeDuplicates(v);
}