#include<bits/stdc++.h>
using namespace std;
int longestsum(vector<int>v, long long k){

    //--------- only for positive values in vector ------------
    //--------  --------
    int n = v.size();
    map<long long,int>mpp;
    long long sum=0;
    int maxLen=0;

    for( int i=0;i<n;i++){
        sum+=v[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        long long rem=sum-k;
        if(mpp.find(rem)!=mpp.end()){
            int len=i-mpp[rem];
            maxLen=max(maxLen, len);
        }
        // mpp[sum]=i;
        if(mpp.find(sum)==mpp.end()){
            //-------- this will not re-update the value corresponding to that sum----
            mpp[sum]=i;
        }
    }
    return  maxLen;

}

int main(){
    vector<int>v={1,2,3,1,1,1,1,1};
    cout<<longestsum(v,3);


}