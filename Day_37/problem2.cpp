//Sum of all possible subsets
class Solution {
    public:
      vector<int> ans;
      void solve(vector<int>& arr,int i,int sum){
          if(i==arr.size()){
              ans.push_back(sum);
              return;
          }
          solve(arr,i+1,sum);
          solve(arr,i+1,sum+arr[i]);
      }
      vector<int> subsetSums(vector<int>& arr) {
          solve(arr,0,0);
          return ans;
      }
  };

// TC : O(2^n)  SC = O(n) recursive stack space.