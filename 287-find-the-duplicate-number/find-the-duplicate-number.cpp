class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s ;
        int a ;
        for(int i = 0; i < n ; i++){
            if(s.find(nums[i])!=s.end()){
                a= nums[i];
                break;

            }else{
                s.insert(nums[i]);
            }
        }
        return a;     
    }
};