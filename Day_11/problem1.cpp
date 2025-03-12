// 118. Pascal's Traingle

class Solution {
    public:
        vector<int> sum(vector<int> v){
            vector<int> sumvec;
            sumvec.push_back(1);
            for(int i=0;i<v.size()-1;i++){
                sumvec.push_back(v[i]+v[i+1]);
            }
            sumvec.push_back(1);
            return sumvec;
        }
        vector<int> createrow(int n){
            if(n==1){
                return {1};
            }
            if (n==2){
                return {1,1};
            }
            return sum(createrow(n-1));
        }
        vector<vector<int>> generate(int n) {
            vector<vector<int>> pascal;
            for(int i=1;i<=n;i++){
                pascal.push_back(createrow(i));
            }
            return pascal;
        }
    };

// TC : O(n square)
// SC : O(n square) used to store the answer