#include <bits/stdc++.h>
using namespace std;
void revword(string s)
{
    string str2 = "";
    for (int i = s.length(); i >= 0; i--)
    {
        str2.push_back(s[i]);
    }
    cout << str2 << " ";
    // str2;
}
string reverseWords(string s)
{
    string str2 = "";
    string str1 = "";
    for (int i = 0; i <=s.length(); i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            // str1.push_back(s[i]);
            // revword(str1);
            for (int j = str1.length()-1; j >= 0; j--)
            {
                str2.push_back(str1[j]);
            }
            if(i!=s.length())
            {str2.push_back('-');}
          //  cout<<"just after for loop of if condition "<<str2<<endl;
            str1.clear();
        }
        else
        {
            str1.push_back(s[i]);
        }
    }
    return str2;
    //cout<<str2;
}
int main()
{
    string s = "god king";
    cout<<reverseWords(s);

    return 0;
}