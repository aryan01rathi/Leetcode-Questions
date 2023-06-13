#include <bits/stdc++.h>
using namespace std;
int minCostClimbingStairs(vector<int> &cost)
{
    int len = cost.size();

    int tp[len];
    tp[len - 1] = cost[len - 1];
    tp[len - 2] = cost[len - 2];
    for (int i = len - 3; i >= 0; i--)
    {
        tp[i] = cost[i] + min(tp[i + 1], tp[i + 2]);
    }
    return tp[0] > tp[1] ? tp[1] : tp[0];
}
int main()
{
    vector<int>v={10,20,5,75,35};
    cout<<minCostClimbingStairs(v);
}