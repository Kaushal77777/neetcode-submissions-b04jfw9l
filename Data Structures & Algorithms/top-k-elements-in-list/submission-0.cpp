class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> res(k);
        for(int i:nums){
            mp[i]++;
        }
        for(int i=0;i<k;i++){
            int maxfreq=0,maxkey=-1;
            for(auto p: mp){
                if(p.second>=maxfreq){
                    maxfreq=p.second;
                    maxkey=p.first;
                }
            }
            res[i]=maxkey;
            mp.erase(maxkey);
        }
        return res;
    }
};
