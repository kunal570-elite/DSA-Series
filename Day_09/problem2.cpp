// 75. Sort Colors 
class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int n = nums.size();
            unordered_map<int, int> mpp;
            int zeros=0, ones =0 , twos=0;
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    zeros++;
                }
                else if (nums[i]==1){
                    ones++;
                }
                else{
                    twos++;
                }
            }
            nums.clear();
            for(int i=0;i<zeros;i++){
                nums.push_back(0);
            }
            for(int i=0;i<ones;i++){
                nums.push_back(1);
            }
            for(int i=0;i<twos;i++){
                nums.push_back(2);
            }
        }
    };

// TC : O(n)
// SC : O(1)