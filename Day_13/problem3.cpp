// 33. Search in Rotated Sorted Array

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] >= nums[low])
            {
                if (nums[mid] > target && nums[low] <= target)
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                if (nums[mid] < target && nums[high] >= target)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};

// T.C=O(logn)
// S.C=O(1)

// Brute with TC O(n)

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            for(int i =0; i<nums.size();i++){
                if(nums[i]==target){
                    return i;
                }
            }
            return -1;
        }
    };