class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        vector<int> res(nums.size() * 2);

        for(int i = 0; i < nums.size(); i++){
            int j = nums.size() + i;
            res[i] = nums[i];
            res[j] = nums[i];
        }
        return res;
    }
};