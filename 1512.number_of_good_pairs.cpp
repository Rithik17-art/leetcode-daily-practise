class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> count(102);
        int totalpairs=0;
        for(int i:nums){
            count[i]++;
        }
        for (int j:count){
            totalpairs=totalpairs+(j*(j-1))/2;
        }
        return totalpairs;

    }
};