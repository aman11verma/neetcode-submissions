class Solution {
public:

    bool checkSimpleAnagram(const string& str, const string& anaString){
        if(str.length()!=anaString.length())
        return false;
        unordered_map<char,int> strHash;
        unordered_map<char,int> anaHash;
        for(int i =0; i<str.length();i++)
        {
            strHash[str[i]]++;
        }
        for(int i =0; i<anaString.length();i++)
        {
            anaHash[anaString[i]]++;
        }
        if(strHash==anaHash){
        return true;
        }
        return false;
    }

    int checkAnagram(const string& str, unordered_map<string,int>& hashString){
        for(auto const& [anaString, index] : hashString){
            bool isAnagram = checkSimpleAnagram(str, anaString);
            if(isAnagram)
            {
            return index;
            }
        }
        return -1;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        unordered_map<string, int> hashString;
        for(int i = 0;i<strs.size();i++){
            int index = checkAnagram(strs[i], hashString);
            if(index!=-1){
                answer[index].push_back(strs[i]);
            }
            else{
                int newIndex = answer.size();
                hashString[strs[i]]=newIndex;
                answer.push_back({strs[i]});
            }
        }
        return answer;
    }
};