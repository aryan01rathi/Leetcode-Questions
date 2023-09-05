#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
        int row=matrix.size();
        int j= matrix[0].size()-1;
        int i=0;
        while(i<row && j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            if(target>matrix[i][j]){
                i++;
            }
            else --j;
        }
        return false;
}
int main()
{
    
    vector<vector<int>> matrix
    {
        {1, 3, 5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    cout<<searchMatrix(matrix, 155);
}