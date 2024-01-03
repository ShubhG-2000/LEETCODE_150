// 242. Valid Anagram


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> mp;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(mp.find(ch) == mp.end()){
                mp[ch] = 1;
            }else{
                mp[ch]++;
            }
        }

        for(int j = 0; j < t.length(); j++){
            char c = t[j];
            if(mp.find(c) == mp.end() || mp[c] == 0){
                return false;
            }else{
                mp[c]--;
            }
        }

        return true;
        
    }
};