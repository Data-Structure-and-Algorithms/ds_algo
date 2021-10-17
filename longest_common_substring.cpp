class Solution {
public:
    int maximum(int val1, int val2)
    {
        //cout<<val1<<" "<<val2<<endl;
        return val1>val2? val1:val2;
    }
    
    int lengthOfLongestSubstring(string s) {
        
        int result = 0;
        set <char> char_set;
        
        int begin_idx = 0;
        int string_length = s.length();
        if(string_length == 0)
        {
            return 0;
        }
        
        for(int index=0; index<string_length; ++index)
        {
            while(char_set.find(s[index]) != char_set.end())
            {
                char_set.erase(s[begin_idx]);
                ++begin_idx;
            }
        char_set.insert(s[index]);
        result = maximum(result, index-begin_idx+1);

        }
        return result;
      
        
    }
};
