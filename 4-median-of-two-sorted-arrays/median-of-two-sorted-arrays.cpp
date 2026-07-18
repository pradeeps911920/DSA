class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int > nums3;
        for(int i : nums1){
            nums3.push_back(i);
        }
        for(int j : nums2){
            nums3.push_back(j);
        }
        sort(nums3.begin(), nums3.end());
        int n = nums3.size();
        int st = 0, end = n-1;
        if(n%2!= 0){
            return nums3[n/2];
        }else{
            return float(nums3[n/2 -1] + nums3[n/2])/2;
        }
        
    }
};