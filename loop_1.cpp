
//Can Make Arithmetic Progression From Sequence

#include <bits/stdc++.h>
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        // FIRST WAY (SUCCESFULY) 
        // Runtime 8 ms, faster than 15.99% || Memory Usage: 9.1 MB, less than 8.68%
        /*int k;
        sort(arr.begin(),arr.end());
        
        for(k = arr.size()-1; k>=2; k--){
            int sum1 = arr[k]- arr[k-1];
            int sum2 = arr[k-1]- arr[k-2];
            if(sum1 != sum2){
                return false;
            }
        }
        return true;*/
        
        /////////////////////////////
        
        //SECOND WAY (SUCESFULLY)
        //Runtime: 9 ms, faster than 19.22% || Memory Usage: 9.2 MB, less than 7.32%
        set<int> unchangedArray; //to storage unique items
        sort(arr.begin(),arr.end());
        for(int i =0; i<arr.size()-1;i++){
            unchangedArray.insert(arr[i+1]-arr[i]);
        }
        return unchangedArray.size() == 1 ? true : false; 
        
    }
};