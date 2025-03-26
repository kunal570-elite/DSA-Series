// 686. Repeated String Match
// https://leetcode.com/problems/repeated-string-match/description/

class Solution {
    public:
        int repeatedStringMatch(string a, string b) {
            int count =1;
            string str = a;
            // Adding a until the size matches or becomes greater 
            while(str.size()<b.size()){
                str+=a;
                count++;
            }
            // Here npos represents "not found".
            if(str.find(b)!=string::npos){
                return count;
            }
            // May be one more "a" needs to be added 
            str+=a;
            count++;
            if(str.find(b)!=string ::npos){
                return count;
            }
            return -1;
        }
    };
    // m hai b.size() and n hai a.size()
    // Time Complexity	: O(m)  
    // Space Complexity	: O(m+n)