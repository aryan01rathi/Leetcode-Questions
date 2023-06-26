#include<bits/stdc++.h>
using namespace std;
int maxsubarraysum(vector<int>v, long long k){

    int len=v.size();
    int sum=0;
    int maxs=INT_MIN;
    int anss=-1;
    int anse=-1;
    int start;
    for(int i=0;i<len;i++){
        if(sum==0)start=i;
        sum+=v[i];
        if(sum>maxs){
            maxs=sum;
            anss=start;
            anse=i;
        }

        if(sum<0){
            sum=0;
        }
    }

    for( int i=anss;i<anse;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return maxs;
    

}

int main(){
    vector<int>v={-2,-3,4,-1,-2,1,5,-3};
    cout<<maxsubarraysum(v,3);


}