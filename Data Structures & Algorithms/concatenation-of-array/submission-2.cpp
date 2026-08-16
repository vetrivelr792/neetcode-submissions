class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        auto res = std::vector<int>(nums.size() * 2);

        for(int i=0; i < nums.size(); i++){
            res[i] = res[nums.size() + i] = nums[i];
        }
        return res;
    }
};