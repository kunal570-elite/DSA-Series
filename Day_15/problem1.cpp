// GFG : K-th element of two Arrays

class Solution {
    public:
      int kthElement(vector<int>& a, vector<int>& b, int k) {
          // code here
          vector<int> ans;
          int i =0,j=0;
          int n1 = a.size();
          int n2 = b.size();
          while(i<n1 && j< n2){
              if(a[i]<=b[j]){
                  ans.push_back(a[i]);
                  i++;
              }
              else{
                  ans.push_back(b[j]);
                  j++;
              }
          }
          while(i<n1){
              ans.push_back(a[i]);
              i++;
          }
          while(j<n2){
              ans.push_back(b[j]);
              j++;
          }
          
          return ans[k-1];
      }
  };
//   TC: O(n1+n2)
// SC : O(n1+n2)