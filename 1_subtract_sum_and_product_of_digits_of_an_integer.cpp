//Question link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

//Time complexity: O(log_base10(n)), since number of digits of a number = floor(log_base10(number)) + 1
//Space complexity: O(1)
//Additional space used: O(1)

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        int dig, diff;
        
        while (n)
        {
            //Extracting every digit of the number.
            dig = n % 10;
            
            sum += dig;   //Adding each digit to the sum
            prod *= dig;  //Multiplying each digit to the product.
            
            n /= 10;    //Leaves out the last digit. Basically throws out the last digit after its use.
        }
        
        diff = prod - sum;  //Difference of product and sum
        
        return diff;
    }
};
