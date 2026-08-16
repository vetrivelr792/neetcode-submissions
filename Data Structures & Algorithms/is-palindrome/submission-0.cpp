class Solution {
public:
    bool isPalindrome(string s) {

        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c){ return !std::isalnum(c); }), s.end());
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        int i = 0,j = s.size() - 1;

        while (i<j){
            if (s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
            
        return true;
        
    }
};
