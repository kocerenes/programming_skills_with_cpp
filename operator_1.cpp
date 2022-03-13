
// 191. Number of 1 Bits

class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        ///////////////////////////////////////
        //FIRST WAY (Unsuccessful)
        //before i get the mod, if 1 remains : count+=1
        //after I divide by 10
        /*int count = 1;
        while(n>0){
            if(n%10 == 1){
                count++;
            }
            n = n/10;
        }
        return count;*/
        ////////////////////////////////////////
        
        //SECOND WAY
        //I reduce the number of digits by 1 by dividing by 10, 
        //subtract from its pre-decremented state and the result is 9, I add
        /*uint32_t count = 0;
        uint32_t temp;
        uint32_t difference;
        
        while(n>0){
            temp = n/10;
            difference = n-temp; 
            if(difference == 9){
                count++;
            }else{
                continue;
            }
        }
        return count;*/
        ////////////////////////////////////////////////
        
        //THIRD WAY (UNSUCCESFULLY)
        //before type int transform to string, after added char array,
        //I compared each character to see if it's 1
        /*int count = 0;
        auto s = std::to_string(n);
        int arrayLength = s.length();
        char charArray[arrayLength];
        // copying the contents of the
        // string to char array
        strcpy(charArray, s.c_str());
        for (int i = 0; i <arrayLength; i++){
            if(charArray[i] == '1')
                count++;
        }
        return count;*/
        ///////////////////////////////////////////////////
        
        //FOURTH WAY (SUCCESFULLY)
        // bitset library
        //return (bitset<32>(n).count());
        
        //////////////////////////////////////////////////
        
        //FIFTH WAY (SUCCESFULLY)
        //brian kernighan's algorithm
        
        int count = 0;
        while(n>0){
            n = n&(n-1);
            count++;
            /*n & 1 ? ans++ : ans;
            n = n >> 1;*/
        }
        return count;
    }
};