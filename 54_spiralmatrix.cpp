#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vecotr<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    int total = row * col;
    int startrow = 0;
    int startcol = 0;
    int endrow = row - 1;
    int endcol = col - 1;
    while (count < end)
    {
        for (int i = startcol; i <= endcol; i++)
        {
            ans.pushback(arr[startrow][i]);//firstrow
            count++;
        }
        startrow++;//srow=1 and scol=0 endcol=n endrow=n
        for (int i = startrow; i <= endrow; i++)
        {
            ans.pushback(arr[i][endcol]); //endcol
            count++;
        }
        endcol--;//srow=1 scol=0 endcol=n-1 endrow=n
        for (int i = endcol; i >= startcol; i--)
        {
            ans.pushback(arr[endrow]][i]);//endrow
            count++;
        }
        endrow--;
        for (int i = endrow; i >=startrow; i--)
        {
            ans.pushback(arr[i][startcol]);//firstcol
            count++;
        }
        startcol++;

    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}