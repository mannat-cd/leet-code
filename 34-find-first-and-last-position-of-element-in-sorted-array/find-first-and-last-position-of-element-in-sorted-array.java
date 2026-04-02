class Solution {

    public int[] searchRange(int[] nums, int target) {
        return new int[] {findfirst(nums, target),findlast(nums, target)};
    }
        
        private int findfirst(int[] nums, int target){
            int beg = 0;
            int end = nums.length - 1;
            int ans = -1;
            while(beg<=end){
                int mid = beg +((end-beg)/2);
                if(nums[mid]==target){
                    ans = mid;
                    end = mid -1;
                }
                else if(nums[mid]<target){
                    beg = mid +1;
                }
                else{
                    end = mid -1;
                }
            }
            return ans;
        }

        private int findlast(int[] nums, int target){
            int beg = 0;
            int end = nums.length - 1;
            int ans = -1;
            while(beg<=end){
                int mid = beg +((end-beg)/2);
                if(nums[mid]==target){
                    ans = mid;
                    beg = mid +1;
                }
                else if(nums[mid]<target){
                    beg = mid +1;
                }
                else{
                    end = mid -1;
                }
            }
            return ans;
        }
    }
