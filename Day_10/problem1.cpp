// 2149. Rearrange Array Elements by Sign

class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            int n = nums.size();
            vector<int> ans(n,0);
            int posNum=0;
            int negNum=1;
            for(int i=0;i<n;i++){
                if(nums[i]>0){
                    ans[posNum]=nums[i];
                    posNum+=2;
                }
                else {
                    ans[negNum]=nums[i];
                    negNum+=2;
                }
            }
            return ans;
        }
    };
// TC : O(n)
// SC : O(n)