class Solution {
public:
    int mySqrt(int x) {
        long long l=0,r=x, mid;
        if (x==0 || x==1) return x;
        while (l<=r)
        {
            mid = (r+l)/2;
            if((mid*mid)<x)l=mid+1;
            else if((mid*mid)==x) return mid;
            else r=mid-1;
        }
        return mid-((mid*mid)>x)+((mid*mid*mid)<=(x));
    }
};
