class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // for(int val : nums){
        //     int count = 0;
        //     for( int el : nums){
        //         if( val == el){
        //             count++;

        //         }
        //     }
        //     if( count > n/2){
        //         return val ; 
        //     }
        // }
        // return -1;
        for(int i = 0 ; i < n ; i++){
            int count = 0; 
            for(int j = 0 ; j < n ; j++){
                if(nums[i]== nums[j]){
                    count++;
                }
            }
            if(count > n/2 ){
                return nums[i];
            }
        }
        return -1;

        
        
    }
};