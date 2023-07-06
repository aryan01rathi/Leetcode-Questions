#include <iostream>
using namespace std;
int sum = 0;

void solve(int n)
{
    if(n==0){return ;}
    int x=n%10;
    if(x==0){sum++;}
    solve(n/10);
}
int main()
{
    int n;
    cin >> n;
    solve(n);
    cout<<sum;
    return 0;
}