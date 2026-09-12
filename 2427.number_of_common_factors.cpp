class Solution {
public:
    int commonFactors(int a, int b) {
        int cf =0;
        int c =0;
        if (a>b){
            c=b;
        }
        else{
            c=a;
        }
        for (int i = 1 ;i <= c ;i++){
            if (a%i == 0 && b%i ==0){
                cf = cf+1;
            } 
        }
        return cf;

        
    }
};