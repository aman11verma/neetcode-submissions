class Solution {
public:
    bool isValid(string s) {
        std::vector<char> inputs(s.size());
        int k = -1;
        for(int i = 0; i < s.size(); i++){
            if(i == 0)
            {
                inputs[++k]=(s[i]);
            }
            else {
                if(s[i] == ')' && inputs[k] == '(')
                {
                    inputs.pop_back();
                    k--;
                }
                else if(s[i] == ']' && inputs[k] == '[')
                {
                    inputs.pop_back();
                    k--;
                }     
                else if(s[i] == '}' && inputs[k] == '{')
                {
                    inputs.pop_back();
                    k--;
                }
                else 
                {
                    inputs[++k]=s[i];
                }
            }
        }
        if(k>=0)
        return false;
        return true;
    }
};
