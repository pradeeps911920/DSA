class Solution {
public:
    void getP(vector<int>& nums, int idx , vector<vector<int>>& ans){
        if(idx==nums.size()){
            ans.push_back({nums});
            return;
        }
        for(int i = idx ; i< nums.size(); i++){
            swap(nums[idx], nums[i]);
            getP(nums , idx+1 , ans);
            swap(nums[idx], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getP(nums, 0 , ans);
        return ans;
        
    }
};