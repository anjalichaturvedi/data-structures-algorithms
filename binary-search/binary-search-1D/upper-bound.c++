// User function Template for C++
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int low = 0;
        int high = arr.size();
        int ans = arr.size();
        
        while (low <= high) {
            int mid = low + (high - low)/2;
            
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
};
