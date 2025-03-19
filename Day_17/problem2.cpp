// 1021. Remove Outermost Parentheses

class Solution {
    public:
        string removeOuterParentheses(string s) {
            int n = s.size();
            stack<char> stk;
            char c1=s[0];
            string ans;
            int level=0;
            for(auto it : s){
                if(it=='('){
                    if(level>0) ans+='(';
                    level++;
                }
                if(it==')') {
                    level--;
                    if(level>0) ans +=')';
                }
            }
            return ans;
        }
    };

// TC : O(N);
// SC : O(1);