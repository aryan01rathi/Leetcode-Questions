#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> matrix)
{
    int n = matrix.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            swap(matrix[i][j], matrix[j][i]);
    } // we have not used j till n becasue it will return the matrix as it is

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    } // this will reverse the matrxi line by line and [i] is used to tell which row to reverse as it is  matrix.


    // for( int i=0;i<n;i++){
    //     fo( intj=0;j<n/2;j++){
    //         int temp=0;
    //         temp= matrix[i][j];
    //         matrix[i][j]=matrix[i][n-1-j];
    //         matrix[i][n-1-j]=temp;
    //     }
    // } to reverse without using predefined function



      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }    
        cout << endl;
    }
}
int main()
{
    
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
     solve(matrix);
}   