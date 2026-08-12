class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry=0;
        int sum=0;
        std::string ans;
          while(i>=0&&j>=0){
            sum=num1[i]-'0'+num2[j]-'0'+carry;
            ans+=sum%10+'0';
           carry = sum/10;
            i--;j--;
        }
        while(i>=0){
            sum=num1[i]-'0'+carry;
            ans+=sum%10+'0';
           carry = sum/10;
            i--;
        }
        while(j>=0){
            sum=num2[j]-'0'+carry;
            ans+=sum%10+'0';
           carry = sum/10;
            j--;
        }
        if(carry!=0){
            ans+=carry+'0';
        }
          
        std::reverse(ans.begin(),ans.end());
        return ans;
    }
};