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
                    
                    if(hashmap[input[idx]] == K)
                    {
                        output.push_back(input[idx]);
                    }
                   
                }
                }
                
               
        }
        return output;    
    }
       
    //vector<vector<int>>& nums is an infinite stream of vectors containing integers
    //K is the number of repeats expected across all of the arrays. 
    //Repeat elements within the same array are ignored.
    
    vector<int> twoOutOfThree(vector<vector<int>>& nums, int K) {
        
        vector <int> result; 
        map <int, int> hashmap;
      
        vector<vector<int>>::iterator it = nums.begin();
        
        //nums.end() will return a reference to a pointer that is beyond the last element of a vector nums.
        //It is a theoretical construct, which cannot be dereferenced. 
        while(it != nums.end())
        {
          result = populateResult(*it, result, hashmap, K);
          **it;
        }
        
        return result;
    }
};
