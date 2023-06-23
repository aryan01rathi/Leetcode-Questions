#include <bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> &d)
{
    int c = 0;
    for (int i = d.size() - 1; i >= 0; i--)
    {
        if (c == 0 && i < d.size() - 1)
        {
            return d;
        }
        else
        {
            d[i] += 1;
            if (d[i] > 9)
            {
                c = 1;
            }
            else
            {
                c = 0;
            }
            // 4%10=4 and 10%10=0
            d[i] %= 10;
        }
    }
    // if the vector size increase after addition
    if (c == 1)
    {
        d.insert(d.begin(), 1);
    }

    return d;
}
int main()
{
    vector<int> v = {1, 1, 2};
    vector<int> d= plusOne(v);

    for( int i=0;i<d.size();i++){
        cout<<d[i]<<endl;
    }
}
