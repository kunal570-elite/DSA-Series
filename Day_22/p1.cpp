// 1781. Sum of Beauty of All Substrings
// https://leetcode.com/problems/sum-of-beauty-of-all-substrings/
class Solution {
    public:
        int beautySum(string s) {
            int sum = 0;
            for(int i=0;i<s.size();i++){
                int freq[26]={0};
                for(int j=i;j<s.size();j++){
                    freq[s[j]-'a']++;
                    int maxFreq = 1;
                    int minFreq = j-i+1;
                    for(int k=0;k<26;k++){
                        if(freq[k]>maxFreq){
                            maxFreq = freq[k];
                        }
                        if(freq[k]<minFreq && freq[k]>0) {
                            minFreq = freq[k];
                        }
                    }
                    sum += (maxFreq-minFreq);
                }
            }
            return sum;
        }
    };

// TC : O(n Square)
// SC : O(1)
// Approach : Generate all substrings using two loops.

// Use freq[26] array to track character counts dynamically.

// Update maxFreq and minFreq in O(26) ≈ O(1).

// Sum up maxFreq - minFreq for all substrings.