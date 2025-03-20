// 242. Valid Anagram
class Solution {
    public:
        bool isAnagram(string s, string t) {
            int hash[26] = {0};
            if(s.size()!=t.size()) return false;
            int n = s.size();
            for(int i=0;i<n;i++){
                hash[s[i] - 'a']+=1;
            }
            for(auto it : t){
                if(hash[it-'a']==0){
                    return false;
                }
                hash[it-'a']-=1;
            }
            return true;
        }
    };

// TC : O(n);
// SC : O(1) constant space used 
