class Solution {
    public int maxProfit(int[] prices) {
        int min = Integer.MAX_VALUE;
        int maX = Integer.MIN_VALUE;
        int maxProfit=0;
        int len = prices.length;
        int diff = 0;
        for(int i = 0; i < len; i++){
            if(prices[i] < min) min = prices[i];
            else{
                diff = prices[i] - min;
                maxProfit = Math.max(maxProfit, diff);
            }
        }
        return maxProfit;

    }
}