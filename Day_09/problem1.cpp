// 1. Two Sum 
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> map;
            vector<int> arr;
            for(int i=0;i<nums.size();i++){
                if(map.find(target-nums[i])!=map.end()){
                    arr.push_back(i);
                    arr.push_back(map[target-nums[i]]);
                    return arr;
                }
                map[nums[i]]=i;
            }
            return arr;
        }
    };

    // TC : O(n) , O(n square) in worst case 
    // SC : O(n)