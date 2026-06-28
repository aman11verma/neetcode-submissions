#include <future>
class Solution {
public:
    bool check(const vector<int>& nums, int i){
        return nums[i]==nums[i+1];
    }


    bool hasDuplicate(vector<int>& nums) {
        if(!nums.size())
        return false;
        sort(nums.begin(), nums.end());
        std::vector<std::future<bool>> futures(nums.size());
        for(int i=0;i<nums.size()-1;i++){
            futures[i]=(std::async(std::launch::deferred, &Solution::check, this, std::ref(nums), i));
        }

        for(int i=0;i<nums.size()-1;i++){
        if(futures[i].get()==true)
            return true;
        }
        return false;
    }
};