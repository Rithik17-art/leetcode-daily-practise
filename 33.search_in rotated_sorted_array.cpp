//MY FIRST APPROACH WHICH SHOWED TLE:
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans(n);
        for (int i:nums){
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        int first=0;
        int last=n-1;
        int anstarget=-1;
        while (first<=last){
            int mid=first+(last-first)/2;
            if (ans[mid]==target){
                anstarget=mid;
            }
            else if(ans[mid]<target){
                first=mid+1;
            }
            else if(ans[mid]>target){
                last=mid-1;
            }
            mid=first+(last-first)/2;
        }
        if(anstarget==-1){
            return -1;
        }
        for(int j:nums){
            if (ans[anstarget]==nums[j]){
                return j;
            }
        }
        return -1;
    }
};
//OPTIMIZED APPROACH I GOT TO KN0W FROM A YT VIDEO:
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int first = 0;
        int last = n - 1;

        while (first <= last) {
            int mid = first + (last - first) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            // Check if the left half is sorted
            if (nums[first] <= nums[mid]) {
                if (nums[first] <= target && target < nums[mid]) {
                    last = mid - 1; // Search left
                } else {
                    first = mid + 1; // Search right
                }
            } 
            // Otherwise, the right half is sorted
            else {
                if (nums[mid] < target && target <= nums[last]) {
                    first = mid + 1; // Search right
                } else {
                    last = mid - 1; // Search left
                }
            }
        }

        return -1;
    }
};: