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

void sumKSub(vector<int>v, int k){
    int l=0;
    int r=0;
    map<int,int>mp;
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum=0;
        for(int j=i;j<v.size();j++){
            sum+=v[j];
            mp[sum]++;
        }
    }

    
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<"Answer is "<<endl;
    for(auto it: mp){
        if(it.second>=k){
            cout<<it.first<<endl;
        }
    }
}
void checkBinaryPalindrome(int n){
    vector<int>v;
    while(n!=0){
        int rem=n%2;
        v.push_back(rem);
        n/=2;
    }
    
    reverse(v.begin(),v.end());
    
    bool check=0;
    int l=0;
    int r=v.size()-1;
    while(l<=r){
        cout<<v[l]<<" "<<v[r]<<endl;
        if(v[l]!=v[r]){
           check=1;
            break; 
        }
        l++;
        r--;
    }
    if(check==1)cout<<"Not palindrome";
    else cout<<"Palindrome";
}

int main()
{
    vector<int> v = {5,3,2,4,2,1};
    //leaderInArray(v);
    
    // kelementsCloser(v,4,3); //{2,4,7,9,10}

    //sumKSub(v,4);

    checkBinaryPalindrome(9);
}