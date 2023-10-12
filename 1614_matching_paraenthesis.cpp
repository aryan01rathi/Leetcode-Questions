class Solution
{
public:
    int maxDepth(string s)
    {
        int countL = 0;
        int countR = 0;
        unordered_map<char, int> mp;
        int ans = 0;

        for (auto i : s)
        {
            if (i == '(')
            {
                countL++;
            }
            if (i == ')')
            {
                ans = countL - countR;
                countR++;
            }
            else
            {

                int diff = countL - countR;
                // cout<<"Run"<<" "<<diff<<endl;
                if (mp[i] >= 0)
                {
                    mp[i] = max(mp[i], diff);
                }
            }
        }

        for (auto i : mp)
        {
            // cout<<i.first<<" "<<i.second<<endl;
            ans = max(ans, i.second);
        }

        return ans;
    }
};