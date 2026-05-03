class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> cache;
        for(auto i : nums){
            if(cache[i])
            return true;
            cache[i]++;
        }
        return false;
    }
};