// 49. Group Anagrams

// WAY 1 , with sorting n* klogk
class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];
            string srt = s;
            sort(srt.begin(), srt.end());

            if(mp.find(srt) != mp.end()){
                mp[srt].push_back(s);
            }else{
                vector<string> v;
                v.push_back(s);

                mp[srt] = v;
            }
        }

        vector<vector<string> > ans;
        for(auto p: mp){
            ans.push_back(p.second);
        }

        return ans;
    }
};

//------------------------------------------------------------------------------------------------------
// WAY 2, without sorting O(n)

class Solution {
    public:

    string generateSortedString(string s){
        int arr[26] = {0};
        //marking
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            arr[ch - 'a']++;
        }

        //making srt string 
        string srt = "";
        for(int i = 0; i < 26; i++){
            int freq = arr[i];
            if(freq > 0){
                srt += string(freq, i + 'a'); 
                /*
                    // Create a string with the specified 
                              character repeated 'frequency' times
                        return std::string(frequency, character);
                */
            }

        }   
        return srt;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        

        unordered_map<string, vector<string>> mp;
        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];

            string srt = generateSortedString(s);
            mp[srt].push_back(s);

        }

        vector<vector<string>> ans;
        for(auto p : mp){
            ans.push_back(p.second);
        } 

        return ans;
    }
};