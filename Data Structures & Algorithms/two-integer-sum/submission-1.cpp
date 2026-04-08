class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        vector<int> op(2);
        
        for (int i = 0; i < nums.size(); i++){
            if (hash.find(target-nums[i]) != hash.end()){
                op[0] = hash[target-nums[i]], op[1] = i;
                return op;
            }
            hash[nums[i]] = i;
        }
        
        return op;
    }
};