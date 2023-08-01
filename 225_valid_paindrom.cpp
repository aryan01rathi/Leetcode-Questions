#include <bits/stdc++.h>
using namespace std;
string lowerconvert(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {

            s[i] = tolower(s[i]);
        }
    }
    return s;
}
string remove(string s){
    string temp="";
    for (int i = 0; s[i] != '\0';)
    {

        if ((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= '0' && s[i] <= '9'))
        {
            temp.push_back(s[i]);
            i++;
        }
        else
        {
            i++;
        }
    }
    return temp;

}
bool checkplaindrome(string temp)
{ 
    int i = 0;
    int j = temp.size() - 1;
    while (i <= j)
    {
        if (temp[i] != temp[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
    }
bool isPalindrome(string s)
{
    int n = s.size();
    cout << "palindrome function" << endl;
    string a = lowerconvert(s);
    string temp = remove(a);
    //cout << temp << endl;
    return checkplaindrome(temp);
   
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout<<isPalindrome(s);

    return 0;
}
