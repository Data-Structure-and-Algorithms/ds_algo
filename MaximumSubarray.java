class Solution {
    public int maxSubArray(int[] nums) {
        // This will never happen as per the input constraints, but still a good practice to make it a habit to check the input.
        if (nums == null || nums.length == 0) {
            return 0;
        }
        int[] dp = new int[nums.length];   
        System.arraycopy(nums, 0, dp, 0, nums.length);
        
        int max = dp[0];
        for (int i = 1; i < dp.length; i++) {
            dp[i] = Math.max(dp[i], dp[i-1] + nums[i]);
            if (dp[i] > max) {
                max = dp[i];                    
            }
        }
        return max;            
    }
}
