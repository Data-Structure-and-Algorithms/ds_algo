class Solution {
public:
    
    vector<int> insertToHashMap(vector <int>&nums, bool flag)
    {
        static vector <int> output;
        static map<int, int> hashmap;
        if(flag == false)
        {
            for(int i=0;i<nums.size();++i)
            {
               if(hashmap.find(nums[i]) != hashmap.end())
               {
                 hashmap[nums[i]] = i;
               }
                else{
                    continue;
                    }
            }
        }
        
        else if(flag == true)
        {
            for(int i=0;i<nums.size();++i)
            {
                //Insert element if not in hashmap already
               if(hashmap.find(nums[i]) != hashmap.end())
               {
                 hashmap[nums[i]] = i;
               }
               else{
                    cout<<nums[i]<<endl;
                    hashmap[nums[i]]++;
                    if(hashmap[nums[i]]>2)
                    {
                        continue;
                    }
                    output.push_back(nums[i]);
                    }
            }
        }
        return output;
    }
    
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        static vector<int> result;
        
        bool flag;
        result = insertToHashMap(nums1, flag=false);
        result = insertToHashMap(nums2, flag=true);
        result = insertToHashMap(nums3, flag=true);
        
        /*
        map<int, int>::iterator it = hashmap.begin();
        while (it != hashmap.end())
        {
            if((it->second)>1)
            {
                result.push_back(it->first);
            }
        }
        */
       return result; 
    }
};
