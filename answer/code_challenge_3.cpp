class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size() -1;
        if(l==r) return 0;
        while(l < r){
          if(nums[l] > nums[l+1]) return l;
          if(nums[r] > nums[r-1]) return r;
          int mid = (l+r)/2;
          if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;
          if(nums[mid] > nums[mid-1]){
            l = mid;
          }
          else{
            r = mid;
          }
        }
        return l;
    }
};
