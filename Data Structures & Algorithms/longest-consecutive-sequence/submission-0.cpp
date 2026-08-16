class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s1;
        s1.insert(nums.begin(), nums.end());
        int longest = 0;

        for (auto n : nums)
        {
            if (!s1.count(n - 1))
            {
                int length = 0;
                while (s1.count(n + length))
                {
                    length++;
                }
                longest = max(length, longest);
            }
        }
        return longest;
    }
};
