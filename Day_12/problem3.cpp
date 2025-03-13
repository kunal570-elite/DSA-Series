// 35. Search Insert Position

class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int n=nums.size();
            for(int i=0;i<n;i++){
                if(nums[i]==target){
                    return i;
                    break;
                }
                else{
                    if(nums[i]>target){
                        return i;
                        break;
                    }
                    else if(nums[n-1]<target){
                        return n;
                    }
                }
            }
            return 0;
        }
    };
// TC : O(n);
// SC : O(1);