class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> hashIndex;
        for(int i = 0; i<n;i++){
            hashIndex[nums[i]]=i;
        }

        for(int i = 0;i<n;i++){
            int diff = target - nums[i];
            if(hashIndex.find(diff)!=hashIndex.end() && hashIndex[diff]!=i)
            return {i, hashIndex[diff]};
        }
        return {};
    }
};
