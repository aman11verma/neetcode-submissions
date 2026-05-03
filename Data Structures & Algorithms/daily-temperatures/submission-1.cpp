class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::vector<int> ans(temperatures.size());
        std::stack<int> st;
        st.push(0);
        for(int i = 1 ; i < temperatures.size(); i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                ans[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
