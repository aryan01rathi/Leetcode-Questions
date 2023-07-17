#include <bits/stdc++.h>
using namespace std;
int numberOfSubarrays(vector<int>& arr, int k) {
        int len=arr.size();
        int count=0;
        int sum=0;
        for(int i=0;i<len;i++){
            if(arr[i]%2==0)arr[i]=0;
            else arr[i]=1;
        }
       
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<len;i++){
            sum+=arr[i];
            int rem=sum-k;
            if(mp.find(rem)!=mp.end()){
                count+=mp[rem];
            }
            mp[sum]++;
            
        }
        return count;
        
    }

int main()
{
    vector<int> v = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    cout << numberOfSubarrays(v, 2);
}