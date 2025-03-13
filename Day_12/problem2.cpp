// 34. Find First and Last Position of Element in Sorted Array


class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int n = nums.size();
            if (n == 0) return {-1, -1};
    
            int first = -1, last = -1;
            int left = 0, right = n - 1;
    
            // To find the first occurrence
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (nums[mid] >= target) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
                if (nums[mid] == target) first = mid;
            }
    
            left = 0, right = n - 1;
            // To find the last occurrence
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (nums[mid] <= target) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
                if (nums[mid] == target) last = mid;
            }
    
            return {first, last};
        }
    };
// TC : nlogn;
// SC : O(1);