class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::vector<int> ans(temperatures.size());
        std::stack<int> st;
        st.push(0);
        for(int i = 1 ; i < temperatures.size(); i++){
            if(temperatures[i]>temperatures[st.top()]){
                while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                    ans[st.top()]=i-st.top();
                    st.pop();
                }
                st.push(i);
                //std::cout << "st.top() == " << st.top() << std::endl;
                //std::cout << "i = " << i << std::endl;
            }
            else {
                st.push(i);
            }
        }
        return ans;
    }
};
