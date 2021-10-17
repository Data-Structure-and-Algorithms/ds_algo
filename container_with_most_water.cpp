class Solution {
public:
    
    int minimum(int val1, int val2)
    {
        return val1<val2? val1:val2;
    }
    
    
    int maxArea(vector<int>& height) {
        
        int max_area = 0;
        int size = height.size();
        int left = 0, right = size-1;
        
        while(left < right)
        {
          int curr_area =  minimum(height[left], height[right])*(right-left);
          
          if(curr_area>max_area)
          {
              max_area = curr_area;
          }
          if(height[left]<=height[right])
          {
              ++left;
          }
          else if(height[left]>height[right])
          {
              --right;        
          }
        
        }
     return max_area;
                  }
};
