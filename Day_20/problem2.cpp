// 8. String to Integer (atoi)
// https://leetcode.com/problems/string-to-integer-atoi/description/

class Solution {
    public:
        int myAtoi(string s) {
            int n = s.size();
            int sign =1;
            int i=0;
            while(i<n && s[i]==' ') i++;
            if( i<n && (s[i]=='+' or s[i]=='-')){
                sign = (s[i]=='-')? -1:1;
                i++;
            }
            int num = 0;
            while(i<n && isdigit(s[i])){
                if(num>(INT_MAX-(s[i]-'0'))/10){
                    return (sign==-1) ? INT_MIN : INT_MAX;
                }
                num = num * 10 + (s[i]-'0');
                i++;
            }
            return num * sign ;
        }
    };

// TC : O(n);
// SC : O(1);