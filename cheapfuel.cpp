#include <iostream>
using namespace std;
void solve()
{
    int x, y, a, b, k;
    cin  >> x >> y >> a >> b >> k;
    for (int i = 1; i <= k; i++)
    {
        x = x + a;
        y = y + b;
    }
    if (x < y)
        cout << "PETROL"<<endl;
    else if (x > y)
        cout << "DIESEL"<<endl;
    else
        cout << "SAME PRICE"<<endl;
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