class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    
    if(nums.size() == 1)
    {
        return nums[0];
    }
        
    int max_sum = nums[0];
    int max_sum_so_far = nums[0];
        
    for(int idx=1; idx<nums.size(); ++idx)
    {
        max_sum_so_far = maximum(nums[idx], max_sum_so_far+nums[idx]);
        max_sum = maximum(max_sum_so_far, max_sum);
    
    }
    
    return max_sum;
    }
    
    int maximum (int a, int b)
    {
        if(a>b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
};
