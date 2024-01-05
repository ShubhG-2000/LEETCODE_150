392. Is Subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        queue<char> qu;
        for(char &ch : t){
            qu.push(ch);
        }

        int i = 0;
        while(!qu.empty()){
            if(s[i] == qu.front()){
                i++;
                qu.pop();
            }else{
                qu.pop();
            }
        }

        return i == s.length();
    }
};