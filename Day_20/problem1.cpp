// 451. Sort Characters By Frequency
// https://leetcode.com/problems/sort-characters-by-frequency/description/

class Solution {
    public:
        string frequencySort(string s) {
            int n = s.size();
    
            unordered_map<char,int> mpp;
            for(int i=0;i<n;i++){
                mpp[s[i]]++;
            }
            string ans ="";
    
            multimap<int,char, greater<int>> sortFreq;
            for(auto it : mpp){
                sortFreq.insert({it.second,it.first});
            }
            for(auto it : sortFreq){
                for(int i=0;i<it.first;i++){
                    ans+=it.second;
                }
            }
            return ans ;
        }
    };

// Approach : using mutimap to store and sort the map in sorted order 
// TC : O(N+Klog(K))
// K is number to keys 

// SC : O(N);