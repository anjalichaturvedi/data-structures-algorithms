class Solution {
public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int high = arr.size() - 1;
        int low = 0;
        int ans = arr.size();
        while (low <= high) {
            int mid = (high + low)/2;
            
            if (arr[mid] >= target) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int upperBound(vector<int>& arr, int target) {
        // code here
        int low = 0;
        int high = arr.size() - 1;
        int ans = arr.size();
        
        while (low <= high) {
            int mid = (high + low)/2;
            
            if (target < arr[mid]) {
                ans = mid;
                high = mid - 1;
            }
            
            else {
                low = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lowerBound(nums, target);
        int n = nums.size();
        if (lb == n || nums[lb] != target ) {
            return {-1, -1};
        }
        return {lb, upperBound(nums, target) - 1};
    }
};