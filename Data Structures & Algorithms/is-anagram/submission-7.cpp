class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        std::unordered_map<char, int> orig_chars;
        for(int i=0;i<s.length();i++){
            orig_chars[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            if(orig_chars[t[i]]==0)
            return false;
            orig_chars[t[i]]--;
        }
        return true;
    }
};
