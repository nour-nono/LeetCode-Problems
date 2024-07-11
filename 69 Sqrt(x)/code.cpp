class Solution {
public:
    // Function to compute the square root of a non-negative integer x
    int mySqrt(int x) {
        // Initialize binary search bounds
        long long l=0, r=x, mid;
        // Directly return x for the cases of 0 and 1
        if (x==0 || x==1) return x;
        // Binary search loop
        while (l<=r)
        {
            // Calculate mid point
            mid = (r+l)/2;
            // If mid*mid is less than x, discard left half
            if((mid*mid)<x) l=mid+1;
            // If mid*mid equals x, mid is the square root
            else if((mid*mid)==x) return mid;
            // If mid*mid is greater than x, discard right half
            else r=mid-1;
        }
        // Adjust mid based on whether it's over or under the square root
        return mid-((mid*mid)>x)+((mid*mid*mid)<=(x));
    }
};
