//Question link: https://leetcode.com/problems/number-of-1-bits/

//Time complexity: O(log_base2(n)), since number of binary digits of a number = floor(log_base2(n)) + 1
//Space complexity: O(1)
//Additional space used: O(1)

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        
        while (n != 0)  //Untill every set bit is counted
        {
            //Checking whether the least significant bit is set or not
            if (n & 1)
                count++;
            
            n >>= 1;   //Removing the least significant bit by right shifting once.
        }
        
        return count;
    }
};
