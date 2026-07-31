class Solution {
public:
    void dfshelper(vector<int>&nums,int i,vector<vector<int>>& ans,vector<int> a){
        if(i==nums.size()){
            ans.push_back(a);
            return;
        }
        vector<int> b=a;
        b.push_back(nums[i]);
        dfshelper(nums,i+1,ans,b);
        while(i<nums.size()-1&&nums[i]==nums[i+1]){
            i++;
        }
        dfshelper(nums,i+1,ans,a);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int>a;
        dfshelper(nums,0,ans,a);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};