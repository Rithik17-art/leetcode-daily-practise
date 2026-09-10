class Solution {
public:
    int differenceOfSums(int n, int m) {
        int divnum = 0;
        int nonnum = 0;
        for(int i = 1; i <= n;i++){
            if (i%m == 0){
                divnum = divnum + i;
            }
            else{
                nonnum = nonnum + i;
            }
           
        }
        return nonnum - divnum; 
        
    return 0;  
    }
};