//290. Word Pattern

class Solution {
public:
    /*similar to 205*/
    bool wordPattern(string p, string s) {
        int i = 0;
        vector<string> v;
        while(i < s.length()){
            string str = "";
            while(i < s.length() && s[i] != ' '){
                str.push_back(s[i]);
                i++;
            }
            v.push_back(str);
            i++;
        }

        if(p.length() != v.size() ){
            return false;
        }
        
        unordered_map<char,string> mp;
        unordered_map<string, bool> used;

        for(int k = 0; k < p.length(); k++){
            char ch = p[k];
            if(mp.find(ch) != mp.end() && mp[ch] != v[k]){
                return false;

            }else if(used.find(v[k]) != used.end() && mp.find(ch) == mp.end()){
                return false;
            }else{
                mp[ch] = v[k];
                used[v[k]] = true;
            }
        }

        return true;
    }
};

