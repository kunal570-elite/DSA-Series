// Square Root
// Function to find square root
// x: element to find square root
class Solution {
    public:
        int floorSqrt(int n) {
            int low = 0, high = n, mid, ans = -1;
            while (low <= high){
                mid = low + (high - low) / 2;
                if (mid * mid == n){
                    return mid;
                }
                else if (mid * mid < n){
                    ans = mid;
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            return ans;
        }
    };
    
    // TC O(logn) 
    // SC O(1)