#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    int len = nums.size();
    int narr[len];
    int j = 0;
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (nums[i] != 0)
        {
            //int q = nums[i];
            narr[j] = nums[i];
            j++;
            count++;
        }
    }
    int rem = len - (len - count);
    for (int i = rem; i < len; i++)
    {
        narr[i] = 0;
    }

    for( int i=0;i<len;i++){
        nums[i]=narr[i];
    }

    cout<<"our vector ";
    for( int i=0;i<len;i++){
        cout<<narr[i]<<" ";
    }
    cout<<endl;
    cout<<"argument vector ";
    for( int i=0;i<len;i++){
        cout<<nums[i]<<" ";
    }

    // for (int i = 0, j = 1; i < len && j < len;)
    // {
    //     if (nums[j] != 0 && nums[i] == 0)
    //     {
    //         swap(nums[i], nums[j]);
    //     }
    //     else if(nums[j]==0 && nums[i]==0){
    //         j++;
    //     }
    //     else
    //     {
    //         i++;
    //         j++;
    //     }
    // }
    // for (int i = 0; i < len; i++)
    // {
    //     cout << nums[i] << " ";
    // }
}
int main()
{
    // int n;
    // cin >> n;
    vector<int> v = {0};
    moveZeroes(v);
}