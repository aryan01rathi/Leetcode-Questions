#include <bits/stdc++.h>
using namespace std;

 void sortColors(vector<int>& nums) {
         int len=nums.size();
         int countz=0;
         int counto=0;
         int countt=0;
        for( int i=0;i<len;i++){
            if(nums[i]==0){
                countz++;
            }
            else if(nums[i]==1){
                counto++;
            }
            else {
                countt++;
            }
        }
       
     for(int i =0; i< countz; i++){
            nums[i] =0;
        }
        for(int i =countz; i< (counto + countz); i++){
            nums[i] =1;
        }
        for(int i =(counto + countz); i< nums.size(); i++){
            nums[i] =2;
        }
        

        
    }
int main()
{
    vector<int> nums{2, 0, 2, 1, 1, 0};
    sortColors(nums);
}