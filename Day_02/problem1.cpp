// GoodOrBad String 

class Solution {
    public:
      //   true for vowel and false for consonant 
      bool isVowel(char ch){
          tolower(ch);
          if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
              return true;
          }
          return false ;
      }
      
      int isGoodorBad(string s) {
          int vowels=0;
          int cons=0;
          int n = s.size();
          for(int i=0 ; i<n ; i++){
              if(isVowel(s[i]) or (isVowel(s[i-1]) and s[i]=='?')){
                  vowels++;
                  cons=0;
                  if(vowels>5){
                      return 0;
                  }
              }
              else if(!isVowel(s[i]) or (!isVowel(s[i-1]) and s[i]=='?')){
                  cons++;
                  vowels=0;
                  if(cons>3) return 0;
              }
              
          }
          return 1;
      }
  };