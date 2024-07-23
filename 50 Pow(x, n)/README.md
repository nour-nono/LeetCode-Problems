problem link: https://leetcode.com/problems/powx-n/
problem name: Pow(x, n)
problem difficulty: Medium


# Intuition
The problem is to calculate the power of a number. We can use the fast power algorithm to solve this problem. The fast power algorithm is a divide and conquer algorithm that can calculate the power of a number in $$O(\log n)$$ time complexity. The algorithm is based on the following observation:

$$x^n = x^{n/2} * x^{n/2}$$ if n is even
$$x^n = x^{n/2} * x^{n/2} * x$$ if n is odd

# Approach
fast power with bit manipulation
first in all cases while n is not 0, we will raise the power of x by 2
but if n is odd, we will multiply the result by the current x also
so we will keep dividing n by 2 with bit manipulation until n is 0
and we will build the result as we go


# Complexity
- Time complexity:
$$O(log n)$$

- Space complexity:
$$O(1)$$

# Code
```
class Solution {
public:
    double myPow(double x, int n) {
        if(!n) return 1;
        long pw_num = n;
        if (n<0) x = 1/x, pw_num = -pw_num;
        double res = 1;
        while(pw_num)
        {
            if(pw_num&1) res = res*x;
            x*=x;
            pw_num >>=1;
        }
        return res;
    }
};
```