class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> store;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size();i++){
            for(int j = i+1, k=nums.size()-1; j<k;){
                //cout << "i = " << i << " j = " << j << " k = " << k << endl;
                auto sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    store.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(sum > 0){
                    k--;
                }
                else {
                    j++;
                }
            }
        }
        vector<vector<int>> vec;
        for(auto it = store.begin(); it!=store.end();it++){
            vec.push_back(*it);
        }
        return vec;
    }
};
