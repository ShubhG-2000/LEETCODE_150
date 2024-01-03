// 205. Isomorphic Strings


class Solution {
public:

    /*
        try for these , pt,tp , badc,baba
        mapping should be 1 to 1 and bi-directional 
    */
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_map<char, int> used;

        
        for(int i = 0; i < s.length(); i++){
            char si = s[i];
            char ti = t[i];

            if(mp.find(si) != mp.end() && mp[si] != ti){
                return false;

            }else if(used.find(ti) != used.end()){
                if(mp.find(si) == mp.end()){
                    return false;
                }
            }else{
                mp[si] = ti;
                used[ti] = 1;
            }

        }

        return true;
    }
};