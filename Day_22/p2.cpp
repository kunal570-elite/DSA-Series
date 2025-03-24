// 921. Minimum Add to Make Parentheses Valid
// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/
class Solution {
    public:
        int minAddToMakeValid(string s) {
            int openB = 0, closeB =0 ;
            for(int i=0;i<s.size();i++){
                if(s[i]=='('){
                    openB++;
                }
                else {
                    if(openB>0){
                        openB--;
                    }
                    else {
                        closeB++;
                    }
                }
            }
            return openB+closeB;
        }
    };
// TC : O(n)
// SC : O(1)

// Approach : iterating through the string and adding count of openingB and reducing it by -1
//  if closing braces occur this is only done if the openB is greater than 1 otherwise adding
//  one to closeB .
// And finally adding number of required opening braces and required closing braces for the 
// 