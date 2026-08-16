class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::vector<std::vector<string>> res;
        std::unordered_map<string, std::vector<string>> m1;

        // iterate through strs
        for(auto s: strs){
            std::string sortedS = s;
            std::sort(sortedS.begin(), sortedS.end());
            m1[sortedS].push_back(s);
        }

        for(auto m : m1) {
            res.push_back(m.second);
        }
        return res;
        
        
    }
};
