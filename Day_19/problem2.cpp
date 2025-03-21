// 13. Roman to Integer
// https://leetcode.com/problems/roman-to-integer/description/
class Solution {
    public:
        int romanToInt(string s) {
            int n = s.size();
            int sum = 0;
            map <char , int > mpp={
                {'I',1},{'V',5},{'X',10},{'L',50},
                {'C',100},{'D',500},{'M',1000}
            };
            for(int i=0;i<n;i++){
                sum+=mpp[s[i]];
                for(int j=i+1;j<n;j++){
                    if(mpp[s[i]]<mpp[s[j]]) {
                        sum-=2*mpp[s[i]];
                        break;
                    }
                }
            }
            return sum;
        }
    };

// TC : O(n square) worst case 
// SC : O(1) Constant space 

// Method 2
class Solution {
    public:
        int romanToInt(string s) {
            int n = s.size();
            int sum=0;
            for(int i=0;i<n;i++){
                if(s[i]=='I' && s[i+1]=='V'){
                    sum+=4;
                    i++;
                    continue;
                }
                else if(s[i]=='I' && s[i+1]=='X'){
                    sum+=9;
                    i++;
                    continue;
                }
                else if (s[i]=='X' && s[i+1]=='L'){
                    sum+=40;
                    i++;
                    continue;
                }
                else if(s[i]=='X' && s[i+1]=='C'){
                    sum+=90;
                    i++;
                    continue;
                }
                else if(s[i]=='C' && s[i+1]=='M'){
                    sum+=900;
                    i++;
                    continue;
                }
                else if (s[i]=='C' && s[i+1]=='D'){
                    sum+=400;
                    i++;
                    continue;
                }
                else{
                    if(s[i]=='I') sum +=1;
                    else if(s[i]=='V') sum+=5;
                    else if(s[i]=='X') sum +=10;
                    else if(s[i]=='L') sum+=50;
                    else if(s[i]=='C') sum+=100;
                    else if(s[i]=='D') sum+=500;
                    else if(s[i]=='M') sum+=1000;
                }
            }
            return sum;
        }
    };

// TC : O(n) adding every case of roman 

// SC : O(1)