#include <bits/stdc++.h>
using namespace std;
int characterReplacement(string s, int k)
{
    int len = s.length();
    int l = 0;
    int r = 0;
    int Max = INT_MIN;
    int temp = k;
    bool check = 0;
    while (r < len)
    {   
        if (s[l] == s[r])
            r++;
        else if (s[l] != s[r] && temp != 0)
        {
            r++;
           
            temp--;
        }
        else
        { cout<<"dsf";
            Max = max(Max, r - l - 1);
            check = 1;
            while (k <= 0)
            {
                l++;
                r = l;
                temp = k;
            }
        }
    }
    if (check == 0)
        return len;
    else
        return Max;
}
int main()
{
   string s="AABABBA";
    cout << characterReplacement(s, 2);
}