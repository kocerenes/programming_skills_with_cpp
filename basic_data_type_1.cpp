
//Average Salary Excluding the Minimum and Maximum Salary

class Solution {
public:
    double average(vector<int>& salary) {
        
        int low, high, total = 0;
        low = high = salary[0];
        for (auto sal : salary) {
            if (sal > high)
                high = sal;
            else if (sal < low)
                low = sal;
            
            total += sal;
        }
        return (total-high-low)/(salary.size()-2.0);
    
    }
};