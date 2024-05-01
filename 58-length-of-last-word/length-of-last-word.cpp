class Solution {
public:
    int lengthOfLastWord(string s) {
        string word = "";
        if (s.length() > 0) {            
            int index = s.length() - 1;
            while(isspace(s[index])){
                index--;
            }
            while (index > -1 && !isspace(s[index]) ) {
                word.push_back(s[index]);
                index--;
            }
        }
        return word.length();
    }
};