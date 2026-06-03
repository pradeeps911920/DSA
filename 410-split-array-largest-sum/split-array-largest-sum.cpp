class Solution {
public:
    bool isValid(vector<int>& nums, int k, int maxAllowed) {
        int n = nums.size();
        int subarr = 1, pages = 0;

        for (int i = 0; i < n; i++) {

            if (nums[i] > maxAllowed) {
                return false;
            }

            if (pages + nums[i] <= maxAllowed) {
                pages += nums[i];
            }
            else {
                subarr++;
                pages = nums[i];
            }
        }

        return subarr <= k ? true : false;
    }

    int splitArray(vector<int>& nums, int k) {

        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        int ans = -1;
        int st = 0;
        int end = sum;

        while (st <= end) {

            int mid = st + (end - st) / 2;

            if (isValid(nums, k, mid)) {
                ans = mid;
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        return ans;
    }
};