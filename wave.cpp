#include <bits/stdc++.h>
using namespace std;

void solve()
{
   
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //         cout<<arr[i][j];
    // }
  //  vector<int>ans;
    
  int i=0;
    for (int j = 0; j < 4; j++)
    {
        if (i == n )
        {
            for (i = n - 1; i >= 0; i--)
            {  //cout<<"if part working ";
                cout << arr[i][j]<<" ";
                ans.push_back(arr[i][j]);
            }
        }
        else
        {
            for (i=0; i < n; i++){
            // {   cout<<"else part working ";
                cout << arr[i][j]<<" ";
                ans.push_back(arr[i][j]);
            }
           // cout<<"vlaue of i "<<i<<;
        }
       
       
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