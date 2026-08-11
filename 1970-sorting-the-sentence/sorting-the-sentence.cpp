class Solution {
public:
    string sortSentence(string s) {
        string str="";
        vector<string>ans(9);
        int i;
        for( i =0; i<s.size(); i++){
            str+=s[i];
            if(s[i]==' '){
            int pos = s[i - 1] - '0';
            str.pop_back();
            str.pop_back();
              ans[pos-1] = str;
              str="";
            }
        }
        int pos = s[i - 1] - '0';
        str.pop_back();
              ans[pos-1] = str;
        
        string res="";
        for(int i=0; i<ans.size(); i++){
            if(ans[i]!=""){
            
            res+=ans[i];
            res+=' ';
            }
            
        }
        res.pop_back();
        return res;
    }
};