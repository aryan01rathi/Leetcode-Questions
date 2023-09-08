#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &arr)
{
    int sum = 0;
    int len = arr.size();
    // calculating prefixmaxL
    int pre[len];
    pre[0] = arr[0];
    for (int i = 1; i < len; i++)
    {
        pre[i] = max(pre[i - 1], arr[i]);
    }

    // suffimaxR
    int suf[len];
    suf[len - 1] = arr[len - 1];
    for (int i = len - 2; i >= 0; i--)
    {
        suf[i] = max(suf[i + 1], arr[i]);
    }
    int temp = 0;
    for (int i = 0; i < len; i++)
    {
        temp = min(pre[i], suf[i]);
        sum += (temp - arr[i]);
    }

    return sum;
}
int main(){
    vector<int>v={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(v);
}