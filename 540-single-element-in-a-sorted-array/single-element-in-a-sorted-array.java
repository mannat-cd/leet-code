class Solution {
    public int singleNonDuplicate(int[] nums) {
        int beg = 0;
        int end = nums.length - 1;
        int mid = beg + (end - beg) / 2;
        if(end == 0){
            return nums[end];
        }
        while(beg<=end){
        mid = beg + (end - beg) / 2;
        if(mid == 0 && nums[mid]!=nums[mid+1]){return nums[0];}
        if(mid == end && nums[mid]!=nums[mid-1]){return nums[end];}
        if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]){return nums[mid];}
      if(mid%2==0){
        if(nums[mid] == nums[mid+1]){
        beg = mid+1;
                              }
        else //if(nums[mid] == nums[mid-1]
            {
                end = mid-1;
            }
      }
      else{
        if(nums[mid] == nums[mid-1]){
            beg = mid +1;
            }
        else{
            end = mid -1;
        }
      }
        }
        return nums[mid];
    }
}