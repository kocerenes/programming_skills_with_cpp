
// Sign of the Product of an Array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int temp = 1;
        int i;
        
        for(i = 0; i<nums.size();i++){
            if(nums[i] == 0)
                return 0;
            else if(nums[i]<0)
                temp = -temp;
        }
        
        return temp;
    }
    
};