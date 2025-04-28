// 40.Combination Sum
// Link : https://leetcode.com/problems/combination-sum-ii/
class Solution {
    public:
        vector<vector<int>> result;
        void solve(int i, int target , vector<int> & candidates,vector<int>tmp){
            if(i==candidates.size()){
                if(target==0){
                    result.push_back(tmp);
                }
                return;
            }
            if(candidates[i]<=target){
                tmp.push_back(candidates[i]);
                solve(i,target-candidates[i],candidates,tmp);
                tmp.pop_back();
            }
            solve(i+1,target,candidates,tmp);
        }
    
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<int> tmp;
            solve(0,target,candidates,tmp);
            return result;
        }
    };
// TC O(2^t * k) SC O(k * x)