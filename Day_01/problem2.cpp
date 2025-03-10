// Reverse Bits 
class Solution {
    public:
      long long reversedBits(long long x) {
          // code here
          long long ans = 0;
          long long powerof2 = pow(2, 31);
          for (int i = 0; i < 32; i++)
          {
              int ld = x & 1;
              x = x >> 1;
              ans += powerof2 * ld;
              powerof2 /= 2;
          }
          return ans;
      }
  };
  