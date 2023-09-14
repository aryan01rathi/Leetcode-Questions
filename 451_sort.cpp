class Solution
{
public:
    string frequencySort(string s)
    {
        map<char, int> om;
        string ans;
        for (int i = 0; i < s.length(); i++)
        {
            om[s[i]]++;
        }

        vector<pair<char, int>> A;

        for (auto it : om)
        {
            A.push_back(it);
        }
        sort(A.begin(), A.end(),
             // custom comparison function and then sort function uses this to sort
             [=](const pair<char, int> &a, const pair<char, int> &b)
             {
                 return a.second > b.second;
             });
        for (auto x : A)
        {
            int temp = x.second;
            while (temp > 0)
            {
                ans += x.first;
                temp--;
            }
            // cout<<x.first<< " "<<x.second<<endl;
        }
        return ans;
    }
};