
//Count Odd Numbers in an Interval Range

class Solution {
public:
    int countOdds(int low, int high) {
        
        int count=0;
        int different = high-low;
        int nextNumber;
      
        if(low %2 != 0){
            count++;
        }
        
        int i=0;
        
        while(i<different){
            nextNumber = low++;
            if(nextNumber %2 != 0){
                count++;
            }
            i++;
        }
        
        return count;
    }
};