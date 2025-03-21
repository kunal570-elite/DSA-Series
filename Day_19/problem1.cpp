// 1614. Maximum Nesting Depth of the Parentheses
// Lnk : https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/
class Solution {
    public:
        int maxDepth(string s) {
            int n = s.size();
            int maxi=0, cnt=0;
            for(int i=0;i<n;i++){
                if(s[i]=='(') cnt++;
                else  if (s[i]==')') cnt--;
                maxi = max(cnt,maxi);
            }
            return maxi;
        }
    };

// TC : O(n)
// SC : O(1) no extra space is used