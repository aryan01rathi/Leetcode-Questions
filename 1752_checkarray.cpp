#include <bits/stdc++.h>
using namespace std;
int check(vector<int> &nums)
{
    int len = nums.size();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (i + 1 == len)
        {  cout<<" entered the first loop"<<endl;
            if (nums[i] > nums[0])
            {   cout<<" value of i is len -1 "<<count<<endl;
                count++;
            }

        }
        if (nums[i] > nums[i + 1]) 
        { cout<<"value of i "<<i<<endl;
            count++;
            cout<<"vlaue of count "<<count<<endl;
        }
        
    }
    cout<<"value of count "<<count<<" ";
    if(count>=2) return false;
        else return true;
}
int main()
{
    // int n;
    // cin >> n;
    vector<int> v = {3, 4, 5, 1, 2};
    cout << check(v);
}