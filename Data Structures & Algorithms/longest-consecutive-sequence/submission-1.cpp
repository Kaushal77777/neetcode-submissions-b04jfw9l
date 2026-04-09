class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int longest = 1;
        for(auto i: st){
            if(st.find(i-1)==st.end()){
                int count=1;
                while(st.find(i+1)!=st.end()){
                    i++;
                    count++;
                }
                longest = max(longest,count);
            }
        }
        return longest;
    }
};