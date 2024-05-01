class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string preFix = "";
        for(int i = 0; i < strs[0].length() ; i++){
            for(int j = 1; j < strs.size(); j++){
                if(strs[0][i] != strs[j][i]){
                    return preFix;
                }
            }
            preFix.push_back(strs[0][i]);
        }
        return preFix;
    }
};