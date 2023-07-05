#include <bits/stdc++.h>
using namespace std;

void leaderInArray(vector<int> v)
{
    vector<int> ans;
    int leader = INT_MIN;
    for (int i = v.size() - 1; i > 0; i--)
    {
        if (v[i] > leader)
        {
            ans.push_back(v[i]);
            leader = v[i];
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
}

void kelementsCloser(vector<int>v,int k, int x){
    sort(v.begin(), v.end());
    int i=0;
    int j=v.size()-1;
    vector<int>ans;
    while(i<=j && k>0){
        if(abs(v[i]-x)<=abs(v[j]-x)){
            ans.push_back(v[i]);
            i++;
            
        }
        else{
            ans.push_back(v[j]);
            j--;
        }
        k--;
    }
    for(auto it :ans){
        cout<<it<<" ";
    }
}




int main()
{
    vector<int> v = {5,3,2,4,2,1};
    //leaderInArray(v);
    
    kelementsCloser(v,4,3); //{2,4,7,9,10}

  

    
}