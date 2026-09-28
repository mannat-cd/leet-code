class Solution {
public:
    void lpsfind(vector<int>&lps, string s){
         int pre = 0, suf =1;
         while(suf<s.size()){
            //match
            if(s[pre]==s[suf]){
                lps[suf]= pre+1;
                pre++, suf++;
            }
            //not match
            else{
                if(pre==0){
                lps[suf] = 0; //initial position
                suf++;
                }
                else pre = lps[pre-1];
                
            }

         }
    }
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int i = 0, j=0;
        vector<int>lps(m,0);
        lpsfind(lps,needle);
        
        while(i<n && j < m){
              
              if(needle[j]==haystack[i]){
                i++, j++;
              }

              else{
                if(j==0) i++;
                else j = lps[j-1];
              }
        }
        if(j==m) return i-j;
        else return -1;
    }
};