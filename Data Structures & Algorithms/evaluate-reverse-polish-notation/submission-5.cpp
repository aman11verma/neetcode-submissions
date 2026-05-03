class Solution {
public:

    int toInt(std::string str){
        if(str.empty())
        return 0;
        int num = 0;
        int i = 0;
        int neg=1;
        if(str[0]=='-'){
            i = 1;
            neg = -1;
        }
        for(; i< str.length(); i++){
            int num2push = str[i] - '0';
            num = num*10+ num2push;
        }
        return num*neg;
    }

    int evalRPN(vector<string>& tokens) {
        std::stack<int> st;
        for(int i = 0 ; i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int temp = st.top();
                st.pop();
                int temp2 = st.top();
                st.pop();
                if(tokens[i]=="+")
                st.push(temp2+temp);
                else if(tokens[i]=="-")
                st.push(temp2-temp);
                else if(tokens[i]=="*")
                st.push(temp2*temp);
                else
                st.push(temp2/temp);
            }
            else {
                st.push(toInt(tokens[i]));
            }
        }
        return st.top();
    }
};
