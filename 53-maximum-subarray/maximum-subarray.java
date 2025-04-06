class Solution {
    public int maxSubArray(int[] nums) {
        int sum = 0, maxSum = Integer.MIN_VALUE;
        int len = nums.length;
        int tempStart = 0;
        int start = -1;
        int end = -1;
        for(int i = 0; i < len; i++){
            if (sum == 0 ) tempStart = i;
            sum += nums[i]; 
            if( maxSum < sum){
                maxSum = sum;        
                start =tempStart;        
                end = i;   
            }
            if(sum < 0) sum = 0;
        }
        //System.out.println(start+ " " + end);
        return maxSum;
    }
}