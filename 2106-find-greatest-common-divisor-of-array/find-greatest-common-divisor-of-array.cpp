class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int maxm = INT_MIN;
        int minm = INT_MAX;

        for(int i = 0 ; i < n ; i++){
            maxm = max(maxm , nums[i]);
            minm = min(minm , nums[i]);

        } 
        if(maxm %minm ==0) return minm;
        else{
            int ans; 
            for(int i = 1 ; i < minm ; i++){
                if(minm%i== 0 && maxm%i== 0){
                    ans = i;
                }

            }
            return ans; 
        }
    }
};