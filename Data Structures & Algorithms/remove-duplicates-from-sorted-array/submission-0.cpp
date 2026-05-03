class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::unordered_map<int, int> hashMap;
        int k=0;
        for(auto i = 0; i<nums.size(); i++){
            if(hashMap.find(nums[i])!=hashMap.end())
            {
                continue;
            }
            else{
                hashMap[nums[i]]=i;
                nums[k++]=nums[i];
            }
        }
        return k;
    }
};