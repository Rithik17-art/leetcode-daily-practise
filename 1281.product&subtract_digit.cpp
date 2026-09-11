class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        int digits;
        while (n!=0){
            digits = n%10;
            product = product*digits;
            sum = sum + digits;
            n = n/10;
        }
        return product - sum;
        
        
    }
};