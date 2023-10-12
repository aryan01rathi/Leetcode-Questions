class Solution
{
public:
    void outwardexpand(string &s, int l, int r, string &ans)
    {
        while (l >= 0 && r <= s.length())
        {
            // check palindrome as well
            if (s[l] != s[r])
                break;
            l--;
            r++;
        }
        // we will only update ans if new substring is longer
        if (ans.size() < r - l)
        {
            ans = s.substr(l + 1, r - l - 1);
        }
    }
    // outward expansion for each char
    string longestPalindrome(string s)
    {
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            // for odd cases
            outwardexpand(s, i, i, ans);
            // for even cases
            outwardexpand(s, i, i + 1, ans);
        }
        return ans;
    }
};