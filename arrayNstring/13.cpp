13. Roman to Integer

class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map <char,int> mp{
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };

    for(int i=0;i<s.size();i++){
        if(mp[s[i]]<mp[s[i+1]]){
            //subtraction tb hogi jb s[i] < s[i+1] eg : IV,IX,XL,XC,ETC
            ans=ans-mp[s[i]];
        }
        else{
            ans=ans+mp[s[i]];
        }
    }
        return ans;
    }
};