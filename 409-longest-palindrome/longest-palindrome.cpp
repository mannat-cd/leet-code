class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>freq(59,0);
         int count=0;
         int extra=0;

        for(char c : s){
            freq[c-'A']++;
        }

        for(int i=0; i<freq.size(); i++){
       
        if(freq[i]%2==0){
            count+= freq[i];
        }
        else{
            extra=1;
            count+= freq[i]-1;
        }
        }
        return count+extra;

    }
};