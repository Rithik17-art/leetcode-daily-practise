class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int currentSum = 0;
            while (num > 0) {
                currentSum = currentSum + num % 10;
                num = num / 10;
            }
            num = currentSum;
        }
        return num;
    }
};