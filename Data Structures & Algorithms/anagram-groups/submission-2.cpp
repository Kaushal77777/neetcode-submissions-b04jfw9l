class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string,vector<string>> mp;
        for(auto str : strs){
            string strkey = getFreqKey(str);
            mp[strkey].push_back(str);
        }
        for(auto p : mp){
            res.push_back(p.second);
        }
        return res;
    }
    string getFreqKey(string s){
        vector<int> freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        string freqString = "";
        for(int i=0;i<26;i++){
            freqString+=(i+'a');
            freqString+=to_string(freq[i]);
        }
         cout<<freqString << endl;
        return freqString;
    }
};
