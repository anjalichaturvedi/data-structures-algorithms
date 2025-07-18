class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = (high+low)/2;
            if (nums[mid] == target) {
                return true;
            }
            if (nums[mid] == nums[low] && nums[mid] == nums[high]) {
                high--;
                low++;
                continue;
            }

            if (nums[low] <= nums[mid]) {
                if (target <= nums[mid] && nums[low] <= target) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            else {
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid +1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return false;
    
    }
};