// Subsets

class Solution {
    public:
        vector<vector<int>> result;
        void solve(int i ,vector<int> & nums,vector<int> & temp){
            if(i>=nums.size()){
                result.push_back(temp);
                return;
            }
            temp.push_back(nums[i]);// taking ith element.
            solve(i+1,nums,temp);
            temp.pop_back();
            solve(i+1,nums,temp);// Not taking the ith element.
        }
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<int> temp;
            solve(0,nums,temp);
            return result;
        }
    };


// Take not take approach.
// TC : pow(2,n)*n
// SC : recursive stack space and auxiliary space O(n) + O(2^n*n)
// 2^n subsets to be formed.
    
    