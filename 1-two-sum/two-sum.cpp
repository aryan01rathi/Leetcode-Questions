class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> diff;
        int len = nums.size();
        for(int i = 0; i< len; i++){
            int curr = nums[i];
            // cout<<curr<<" ";
            int needed = target-curr;
            if(diff.find(needed) != diff.end()){
                auto it = diff.find(needed);
                //cout<<it->first<<" ";
                ans.push_back(it->second);
                ans.push_back(i);
                
            }else{diff[curr] = i;}
            
        }
        return ans;
    }
};