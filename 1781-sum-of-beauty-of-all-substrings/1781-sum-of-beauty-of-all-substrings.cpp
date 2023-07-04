class Solution {
public:
    int beautySum(string s) {
        int sum=0;
       for(int i=0;i<s.length();i++){
           unordered_map<char,int>mp;
           
           for( int j=i;j<s.length();j++){
               
                   mp[s[j]]++;
                   
               int maX=INT_MIN;
               int miN=INT_MAX;
               for(auto i:mp){
                   maX=max(maX,i.second);
                   miN=min(miN,i.second);
               }
              sum+=maX-miN;
               
           }
       } 
        return sum;
    }
};