#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> &nums)
{
    int len = nums.size();
    vector<int> v;
    // unordered_map<int,int>mp;
    // for(int i=0;i<len;i++){
    //     mp[nums[i]]++;
    // }

    // for(auto it:mp){
    //     if(it.second>len/3){
    //         v.push_back(it.first);
    //     }
    // }

    int el1 = INT_MIN;
    int el2 = INT_MIN;
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < len; i++)
    {
        if (count1 == 0 && nums[i] != el2)
        {
            count1++;
            el1 = nums[i];
        }
        else if (count2 == 0 && nums[i] != el1)
        {
            count2++;
            el2 = nums[i];
        }
        else if (nums[i] == el1)
            count1++;
        else if (nums[i] == el2)
            count2++;
        else
        {
            count1--;
            count2--;
        }
    }
    // manual checking if the answer is correct or not
    count1 = 0;
    count2 = 0;
    for (int i = 0; i < len; i++)
    {
        if (el1 == nums[i])
            count1++;
        if (el2 == nums[i])
            count2++;
    }

    int mini = (int)(len / 3) + 1;
    if (count1 >= mini)
        v.push_back(el1);
    if (count2 >= mini)
        v.push_back(el2);
    return v;
}
int main(){
    vector<int>v ={3,2,3};
    vector<int>p=majorityElement(v);

}