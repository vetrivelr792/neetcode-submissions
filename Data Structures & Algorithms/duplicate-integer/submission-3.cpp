class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::set<int> s1{nums.begin(),nums.end()};

        return s1.size() != nums.size();
        
    }
};