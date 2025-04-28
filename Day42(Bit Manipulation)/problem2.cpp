
// 2220. Minimum Bit Flips to Convert Number
// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

class Solution {
    public:
        int minBitFlips(int start, int goal) {
            int y = start ^ goal;
            int cnt = 0;
            while(y!=0){
                if(y & 1) cnt++;
                y >>= 1;
            }
            return cnt;
        }
    };

// TC : O(log2(Y))
// SC : O(1)


// ALSO

class Solution {
    public:
        string intToBit(int n){
            string str = "";
            while(n!=0){
                if(n%2==0){
                    str+="0";
                }
                else{
                    str+="1";
                }
                n/=2;
            }
            return str;
        }
        int minBitFlips(int start, int goal) {
            string a = intToBit(start);
            string b = intToBit(goal);
            while(a.length() < b.length()){
                a+="0";
            }
            while(b.length() < a.length()){
                b+="0";
            }
            reverse(a.begin(),a.end());
            reverse(b.begin(),b.end());
            //  1010 0111
    
            int count = 0;
            for(int i=0;i<a.length();i++){
                int a1 = a[i]-'0';
                int b1 = b[i]-'0';
                if(a1^b1){
                    count+=1;
                }
            }
            return count;
        }
    };



     // TC : O(2*max(length(a),length(b)))
    // SC : O(max(log2(length(a),length)))



