class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mps,mpt;
        for(auto c: s){
            mps[c]++;
        }
        for(auto c: t){
            mpt[c]++;
        }
        if(mps.size()!=mpt.size()){
            return false;
        }else{
            for(auto p:mps){
                if(mps[p.first]!=mpt[p.first]){
                    return false;
                }
            }
        }
        return true;
    }
};
