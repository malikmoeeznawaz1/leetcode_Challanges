class Solution {
public:
    string reversePrefix(string word, char ch) {
        string pre = "";
        bool flag = false;
        for(int i =0; i < word.length(); i++){
            if(word[i] != ch){
                pre.push_back(word[i]);
            }else{
              
                    pre.push_back(word[i]);
                    flag = true;
                    break;
        
            }
        }
        if(flag){
            int start = 0, end = pre.length()-1;
            while(start < end){
                char temp = pre[start];
                pre[start] = pre[end];
                pre[end] = temp;

                start++;
                end--;
            }
        }
         for(int i = pre.length(); i < word.length(); i++){
            pre.push_back(word[i]);
        }
        
        return pre;
    }
};