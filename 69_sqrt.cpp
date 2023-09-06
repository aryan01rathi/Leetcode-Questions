#include <iostream>
using namespace std;
int solve(int n)
{
    int s = 0;
    int e = n;
    int ans = -1;
    int mid = s + (e - s) / 2;
    //cout << "before whille loop" << endl;
    while (s <= e)
    {
      //  cout << "in whille loop" << endl;
        if (mid * mid == n)
        {
        //    cout << "equal" << endl;
            return mid;
        }

        if (mid * mid > n)
        {
          //  cout << "greater tahn" << endl;
            e = mid - 1;
        }
        else
        {
            //cout << "less than" << endl;
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double moreprecision(int invalue, int precision, int n)
{
    double factor = 1;
    double ans = invalue;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int tempsol = solve(n);
    cout << moreprecision(tempsol, 3, n);
}