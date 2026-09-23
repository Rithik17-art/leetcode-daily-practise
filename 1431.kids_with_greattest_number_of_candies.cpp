class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int max=*max_element(begin(candies),end(candies));
        vector<bool> result(n);
        for (int i=0;i<n;i++){
            if (candies[i]+extraCandies>=max){
                result[i]=true;
            }
            else{
                result[i]=false;
            }
        }
        return result;

        }       
    
};