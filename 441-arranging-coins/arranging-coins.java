class Solution {
    public int arrangeCoins(int n) {
        int temp = n;
        if(n==1){return 1;}
        for( int i =1 ; i<=n; i++){
            temp = temp-i;
            if(temp<0){
                return i-1;
            }
        }
        return 0;
    }
}