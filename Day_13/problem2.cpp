// 153. Find Minimum in Rotated Sorted Array

class Solution {
    public:
        int findMin(vector<int>& nums) {
            int n= nums.size();
            int mini= nums[0];
            int low= 0,high= n-1;
            while(low <= high){
                int mid= low+(high-low)/2;
                if(nums[low]<=nums[mid]) {
                    mini= min(mini,nums[low]);
                    low= mid+1;
                }
                else {
                    mini= min(mini,nums[mid]);
                    high= mid-1;
                }
            }
            return mini;
        }  
    };
    
    //T.C=O(logn)
    //S.C=O(1)