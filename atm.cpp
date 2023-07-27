//#include <iostream>
#include<bits/stdc++.h>//include all libraries, cons is it takes more space
using namespace std;

int main()
{
    int x;
    float y;

    cin >> x >> y;

    if (x % 5 == 0 && (x + 0.50 <= y))
    {
        y = y - x - 0.50;
    }
    cout << fixed << setprecision(2) << y;

    return 0;
}
