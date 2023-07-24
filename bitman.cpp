#include <bits/stdc++.h>
using namespace std;

vector<int> bitManipulation(int num, int i)
{
    // Write your code here.

    int y = 1 << (i -1);
    int ans = y & num;

    vector<int> v;

    if (ans == 0)
    {
        v.push_back(0);
    }
    else
    {
        v.push_back(1);
    }
    ///////
     int temp;
    
        temp=num|y;
        v.push_back(temp);
  
/////
    cout<<"third part "<<ans<<endl;
    if (ans != 0)
    {
        y = ~y;
        temp = y & num;
        v.push_back(temp);
    }
    else
    {
        v.push_back(num);
    }
    return v;
}

int main()
{
    // vector<int>v =bitManipulation(11,2);
    // for(auto i:v){
    //     cout<<i<<endl;
    // }
    int mask=1<<(1);
    cout<<mask<<endl;
    int ans= mask& 5;
    cout<<ans;
}