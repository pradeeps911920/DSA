class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // set<vector<int>> st;
        // int n = nums.size();
        // for(int i = 0 ; i < n ; i++){
            
        //     for(int j = i+1 ; j < n ; j++){
        //         for(int k =  j+1; k < n; k++ ){
        //             if(nums[i]+nums[j]+nums[k]==0){
        //                 st.insert({nums[i], nums[j], nums[k]});

        //             }
        //         }
        //     }
        // }
        // vector<vector<int>> ans(st.begin(), st.end());
        // return ans ;


        //hashing 

        // set<vector<int>>st ;
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // for(int i = 0 ; i < n; i++ ){
        //     set<int> s;
        //     int target = -nums[i];
        //     for(int j = i+1; j < n ; j++){
        //         int first = nums[j];
        //         int sec = target- first;
        //         if(s.find(sec)!= s.end()){
        //             vector<int> temp = {nums[i], first , sec};
        //             sort(temp.begin(), temp.end());
        //             st.insert(temp);
        //         }else{
        //             s.insert(first);                }
        //     }
        // }
        // vector<vector<int>> ans(st.begin(), st.end());
        // return ans;

        //two pointer approach
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n  = nums.size();
        for(int i = 0; i < n ; i++){
            if(i> 0 && nums[i]==nums[i-1]) continue ;
            int j = i+1 , k = n-1;
            while(j < k ){
                int sum = nums[i]+ nums[j]+nums[k];
                if(sum < 0) j++;
                else if(sum>0 ) k--;
                else{
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++, k--;
                    while( j < k  && nums[j]==nums[j-1]) j++;
                }

            }
        }
        return ans;
        
    }
};