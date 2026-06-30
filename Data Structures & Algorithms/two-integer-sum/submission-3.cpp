class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        auto n = nums.size();
        for(auto i = 0;i<n-1;i++){
            for(auto j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target)
                return {i,j};
            }
        }
        return {-1,-1};
    }
};
