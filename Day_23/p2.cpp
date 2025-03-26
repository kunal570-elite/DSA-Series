// 214. Shortest Palindrome
// https://leetcode.com/problems/shortest-palindrome/description/

class Solution {
    public:
        string shortestPalindrome(string s) {
            int n = s.size();
            string rev = s;
            reverse(rev.begin(),rev.end());
            for(int k=0;k<n;k++){
                if(!memcmp(s.c_str(),rev.c_str()+k,n-k)){
                    return rev.substr(0,k)+s;  
                }
            }
            return rev +s;
        }
    };

// TC : O(n square)
// SC ; O(n) to return the answer 