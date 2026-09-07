class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0 , high = n-1;
        while (mid <= high ){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;

            }else{
                swap(nums[high], nums[mid]);
                high--;
            }
        }
        
    }
};
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int st = 0, end = nums.size()-1;
//         while(st<=end){
//             int mid = st + (end-st)/2;
//             if(nums[mid] == 0 ){
//                 swap(nums[mid] , nums[st]);
//                 st++;
//             }else if(nums[mid]== 2){
//                 swap(nums[mid] , nums[end]);
//                 end--;
//             }else{
//                 st++;
//                 end--;
//             }
//         }
//         return;

        
//     }
// };