class Solution {
public:
    int majorityElement(vector<int>& nums) {

        std::unordered_map<int, int> m1;

        for(auto n: nums){
            m1[n]++;
        }

        for(auto m: m1){
            if (m.second > (nums.size() / 2)){
                return m.first;
            }
        }
        
        return 0;
    }
};