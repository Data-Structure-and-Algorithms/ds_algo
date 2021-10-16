class Solution {
public:
    
    vector <int> populateResult(vector<int> &input, vector<int> &output,
                                   map<int,int> &hashmap)
    {   
 
            map<int, bool> temp_map;
            for(int idx=0; idx<input.size(); ++idx)
            {
                if(temp_map.find(input[idx]) == temp_map.end())
                {
                   temp_map[input[idx]] = true; 
                    
                  if(hashmap.find(input[idx]) == hashmap.end())
                {
                    hashmap[input[idx]] = 1;
                }
                else{
                    hashmap[input[idx]]++;
                    
                    if(hashmap[input[idx]] == 2)
                    {
                        output.push_back(input[idx]);
                    }
                   
                }
                }
                
               
        }
        return output;    
    }
       

    
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        vector <int> result; 
        map <int, int> hashmap;
        result = populateResult(nums1, result, hashmap);
        result = populateResult(nums2, result, hashmap);
        result = populateResult(nums3, result, hashmap);
        
        return result;
    }
};
