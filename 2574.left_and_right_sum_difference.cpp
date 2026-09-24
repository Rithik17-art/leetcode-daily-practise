class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int totalsum = 0;
        for (int i : nums) {
            totalsum += i;
        }
        int leftsum = 0;
        vector<int> answer(n);
        for (int j = 0; j < n; j++) {
            int rightSum = totalsum - leftsum - nums[j];
            answer[j] = abs(leftsum - rightSum);
            leftsum += nums[j];
        }
        return answer;
    }
};