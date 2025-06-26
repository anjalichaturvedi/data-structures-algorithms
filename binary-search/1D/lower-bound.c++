// User function Template for C++
class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int high = arr.size() - 1;
        int low = 0;
        int ans = arr.size();
        while (low <= high) {
            int mid = low + (high - low)/2;
            
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
};
