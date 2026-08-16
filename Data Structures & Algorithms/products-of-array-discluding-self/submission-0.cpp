class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
            for(int i=0; i < nums.size(); i++){
    
                int lp = 1, rp = 1;
                for(int j=0; j < i; j++){
                    lp *= nums[j];
                }
    
                for(int j=i+1; j < nums.size(); j++){
                    rp *= nums[j];
                }
    
                res.push_back(lp * rp);
            }
            return res;
    }
};
