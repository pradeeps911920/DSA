class Solution {
public:
    int Search(vector<int>& arr, int targ , int st , int end ){
        if(st <= end){
            int mid = st +(end-st)/2;
            if(targ == arr[mid]){
                return mid;
            }else if(targ> arr[mid]){
                return Search(arr , targ , mid+1 , end);
            }else if(targ< arr[mid]){
                return Search(arr , targ , st , mid-1);
            }
            
        }
        return -1;
    
    }
    int search(vector<int>& arr, int targ) {
        int st = 0, end = arr.size()-1;
        return Search(arr, targ , st , end);
    }
    // int search(vector<int>& nums, int targ) {
    //     int st = 0;
    //     int end = nums.size()-1;
    //     while(st <= end){
    //         int mid = st + (end - st)/2;
    //         if(target > nums[mid]){
    //             st = mid +1 ;
    //         }else if(target < nums[mid]){
    //             end = mid -1 ;
    //         }else {
    //             return mid;
    //         }

    //     }
    //     return -1;
        
    // }
};