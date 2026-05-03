class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        size_t input_size = digits.size();
        std::vector<int> result(input_size);
        int increase_previous = 1;
        for(int i = input_size-1; i>=0; i--){
            if(increase_previous){
                if(digits[i]==9){
                    if(i==0){
                        result.resize(input_size+1);
                        result[i]=1;
                        break;
                    }
                    else{
                        result[i]=0;
                    }
                }
                else {
                    result[i]=digits[i]+increase_previous;
                    increase_previous=0;
                }
            }
            else{
                result[i]=digits[i];
            }
        }
        return result;
    }
};
