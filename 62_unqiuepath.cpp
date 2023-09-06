#include <bits/stdc++.h>
using namespace std;
int solve(int row, int col, int m, int n, vector<vector<int>>&dp)
{
    // // base condition
    // if (row == m - 1 && col == n - 1)
    // {   
        
    //     count++;
    //     //cout<<"Base condition hit "<<count<<endl;
    //     return;
    // }

    // if (row < m-1)
    // {   
    //     //cout<<"first if Condition "<<row<<" "<<col<< " "<<endl;
    //     //cout<<"down "<<endl;
    //     solve(row + 1, col, count, m, n);
    // }

    // if (col < n-1)
    // {
    //     //cout<<"Second if Condition "<<row<<" "<<col<< " "<<endl;
    //    // cout<<"Right "<<endl;
    //     solve(row, col + 1, count, m, n);
    // }

    if(row==m-1 && col==n-1)return 1;
    if(row>=m || col>=n)return 0;
    if(dp[row][col]!=-1)return dp[row][col];
    else return dp[row][col] =solve(row+1, col,m,n,dp)+solve(row,col+1,m,n,dp);
}
int uniquePaths(int m, int n)
{
    //int count = 0;
    //solve(0, 0, count, m, n);
    vector<vector<int>>dp(m, vector<int>(n,-1));
    return solve(0,0,m,n, dp);
    
    //return count;
}

int main()
{

    int ans=uniquePaths(3,2);
    cout<<ans;
}