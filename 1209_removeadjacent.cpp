#include <iostream>
using namespace std;
string removeDuplicates(string s, int k)
{
    //cout<<"function in"<<endl;
    int i = 0;
    int n = s.length();
    cout << "length of string" << n << endl;
    while (s.length() != 0 && s[i + (k-1)] != '\0')
    {
        if (s[i] != s[i + 1])
        {
            i++;
            cout << "value of i  after increment " << i << endl;
        }
        else
        {
            cout << "vlaue of i and char at i and i+k-1 " << i << " " << s[i] << " " << s[i + k - 1] << endl;
            s.erase(i, k);
            cout << s << endl;
            if (i > 1)
                i -=(k-1);
            else
                i = 0; //so that it does not iterate from starting which was               giving TLE
        }
    }
    return s;
}

int main()
{ // 012345
    string s = "yfttttfbbbbnnnnffbgffffgbbbbgssssgthyyyy";

    cout << removeDuplicates(s, 4);
}