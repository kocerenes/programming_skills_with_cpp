
// 1281. Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int product = 1;
        int sum = 0;
        int keep;
        
        while(n>0){
            keep = n%10; // 123 -> 3
            sum +=keep;
            product*= keep;
            n=n/10; //123/10 => 12 
        }
        
        return (product-sum);
    }
};