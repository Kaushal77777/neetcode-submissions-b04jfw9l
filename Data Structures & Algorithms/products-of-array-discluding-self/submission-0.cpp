class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res,prefix(nums.size()-1),sufix(nums.size()-1);
        //prefix
        int currprefix=1;
        for(int i=0;i<nums.size()-1;i++){
            currprefix*=nums[i];
            prefix[i]=currprefix;
        }
        for(int i:prefix){
            cout << i << " ";
        }cout<<endl;
        //sufix
        int currsufix=1;
        for(int i=nums.size()-1;i>=1;i--){
            currsufix*=nums[i];
            sufix[i-1]=currsufix;
        }
        for(int i:sufix){
            cout << i << " ";
        }cout<<endl;


        if(nums.size()==2){
            res.push_back(sufix[0]);
            res.push_back(prefix[0]);
            return res;
        }
        else{
            res.push_back(sufix[0]);
            for(int i=1;i<nums.size()-1;i++){
                res.push_back(prefix[i-1]*sufix[i]);
            }
            res.push_back(prefix[prefix.size()-1]);
        }

        return res;
    }
};
