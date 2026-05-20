class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        int n = nums.size();
        // vector<int> suffix(nums.size(),1);
        // vector<int> prefix(nums.size(),1);
        // for(int i = 1 ; i < nums.size(); i++){
        //     prefix[i]= prefix[i-1]*nums[i-1];
            
        // }
        // for(int i = nums.size()-2; i >=0 ; i--){
        //     suffix[i] = suffix[i+1]*nums[i+1];

        // }
        // for(int i = 0 ; i < nums.size();i++){
        //     ans[i]= prefix[i]*suffix[i];
        // }
        // return ans ;
        for(int i = 1 ; i < n ; i++){
            ans[i] = ans[i-1]*nums[i-1];
        }
        int suffix =  1;
        for(int i = n-2 ; i >=0 ; i--) {
            suffix = suffix*nums[i+1];
            ans[i] = suffix*ans[i];

        }
        return ans;

    }
};