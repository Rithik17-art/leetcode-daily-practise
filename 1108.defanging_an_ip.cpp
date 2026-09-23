class Solution {
public:
    string defangIPaddr(string address) {
        string defang="";
        
        for (char i : address){
            if (i=='.'){
                defang=defang+"[.]";
            }    
            else{
                defang = defang+i;
            }
            
        }
        return defang;
        
    }
};