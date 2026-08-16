class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
            for(auto str : strs){
                s.append(to_string(str.length()));
                s.append("#");
                s.append(str);
            }

        return s;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> res;
        while (i < s.length()){
            string len;
            while (s[i] != '#')
            {
                len += s[i];
                i++;
            }
            i++;
            int length = atoi(len.c_str());
            string d(s.substr(i, length));

            res.push_back(d);
            i += length;
                
        }
        return res;
    }
};
