#include <bits/stdc++.h>
using namespace std;
bool powercheck(int n)
{
    return n && !(n & (n - 1));
}
int setBits(int n)
{
    // Write your code here.
    int ans;
    int temp = ~n;
    temp *= -1;
    if (powercheck(temp))
        ans = n;
    else
        ans = n | (n + 1);
    return ans;
}
int main()
{
    cout << setBits(7);
}