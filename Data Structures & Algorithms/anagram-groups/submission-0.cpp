class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map1;
         for(auto s : strs){
            auto s1(s);
            sort(s1.begin(), s1.end());

            auto it =  map1.find(s1);
            if(it == map1.end()){
                map1[s1] = {s};
                continue;
                }

            it->second.push_back(s);

        }

        vector<vector<string>> res;

        for(auto v: map1){
            res.push_back(v.second);
        }
        return res;
    }
};
