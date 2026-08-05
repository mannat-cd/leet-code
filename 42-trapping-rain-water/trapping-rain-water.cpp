class Solution {
public:
    int trap(vector<int>& height) {
        int maxi = INT_MIN;
        int pos;
        for(int i = 0 ; i<height.size(); i++){
            if(height[i]>=maxi){
             maxi = height[i];
            pos = i;
            }
        }
        int sum = 0;
        int maxl = height[0];
        for(int i = 1 ; i<pos; i++){
            if(height[i]>=maxl){
                maxl=height[i];
            }
            else{
                    sum += maxl-height[i];
                }
        }
        int n = height.size()-1;
        int maxr = height[n];
        for(int i = height.size()-2 ; i>pos ; i--){
            if(height[i]>=maxr){
                maxr=height[i];
            }
                else{
                    sum += maxr-height[i];
                }
        }
      return sum;
    }
};