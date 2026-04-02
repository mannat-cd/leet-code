/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int beg = 1;
        int end = n;
        int mid;
        int ans = -1;
        while(beg<=end){
            mid = beg + (end - beg) / 2;;
            if(isBadVersion(mid)){
                end = mid - 1 ;
                ans = mid;
            }
            else {
                  beg = mid+1;
            }

        }
        return ans;
    }
}