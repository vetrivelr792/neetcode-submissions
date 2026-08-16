class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false;

        // O(n log n)
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        // O(n)
        for(int i = 0; i < s.length(); i++){
            if(s[i] != t[i]) return false;
        }
        return true;
    }
};
