#include <iostream>
using namespace std;
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    if ((x + y) < z)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO";
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