// 1929. Concatenation of Array
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int a = nums[i];
            ans.push_back(a);
        }
        for(int i=0;i<n;i++){
            int a = nums[i];
            ans.push_back(a);
        }
        return ans ;
    }
};