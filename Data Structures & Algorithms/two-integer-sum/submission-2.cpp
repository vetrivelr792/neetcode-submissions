class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;
    
            for(int i =0; i < nums.size(); i++) {
                int diff = target - nums[i];

                auto it = s.find(diff);
                if (it != s.end())
                {
                    return {s[diff], i};
                }

                s[nums[i]] = i;
            }
            return {};
        
    }
};
