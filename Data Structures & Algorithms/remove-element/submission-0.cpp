class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        while(r<n){
            while(r < n && nums[r]==val){
                r++;
            }
            if(r<n)
            nums[l++] = nums[r++];
        }
        return l;
    }
};