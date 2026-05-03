class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> cache;
        int lenS = 0, lenT = 0;
        for(auto c : s){
            cache[c]++;
            lenS++;
        }

        for(auto c : t){
            lenT++;
            if(cache[c])
            cache[c]--;
            else
            return false;
        }
        if(lenS==lenT)
        return true;
        return false;
    }
};
