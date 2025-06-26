// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int low = 0;
        int ans = INT_MAX;
        int high = arr.size() - 1;
        int index = 0;
        
        while (low <= high) {
            int mid = (high+low)/2;
            if (arr[low] <= arr[mid]) {
                if (arr[low] < ans) {
                    ans = arr[low];
                    index = low;
                }
                low = mid + 1;
            }
            else {
                ans =  arr[mid];
                high = mid - 1;
                index = mid;
            }
        }
        return index;
        }
        
    };
