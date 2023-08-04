#include <bits/stdc++.h>
using namespace std;
int eachcell(int r, int c)
{
    if (r == c || c == 1)
        return 1;
    return eachcell(r - 1, c - 1) + eachcell(r - 1, c);
}
vector<int> getRow(int rowIndex)
{

    int i = 0;
    vector<int> v;
    if (rowIndex == 0)
    {
        v.push_back(1);
        return v;
    }

    while (v.size() <= rowIndex + 1)
    {
        //cout << "function is called" << endl;
        ++i;
        if(i==rowIndex+2)return v;
        
        v.push_back(eachcell(rowIndex + 1, i ));
        //cout<<i<<endl;
    }

    return v;
}

int main()
{   //this code gives TLE for input 29
    vector<int> ans = getRow(2);
    for (int n : ans)
    {
        cout << n << " ";
    }
}