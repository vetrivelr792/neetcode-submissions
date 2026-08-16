class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m1;

        for(auto n: nums){
            m1[n]++;
        }
        
        for(auto [k,v]: m1){
            if (v > nums.size() / 2)
            return k; 
        }

        return 0;
    }
};