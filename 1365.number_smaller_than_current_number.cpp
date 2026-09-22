class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        
        for (int i=0;i<n;i++){
            int great = 0;
            for (int j=0;j<n;j++){
                if (nums[i]>nums[j]){
                    great = great+1;
                         
                }
                
            }
            result.push_back(great);
        }
        
        return result;
        
    }
};