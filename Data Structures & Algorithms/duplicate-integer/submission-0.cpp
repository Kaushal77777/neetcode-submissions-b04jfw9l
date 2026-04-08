class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i: nums){
            if (mp.count(i) == 0){
                mp[i]++;
            }else{
                return true;
            }
        }
        return false;
    }
};