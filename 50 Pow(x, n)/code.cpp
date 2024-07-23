class Solution {
public:
    double myPow(double x, int n) {
        if(!n) return 1;
        if(n == INT_MIN) x= 1/x,x*=x,n=INT_MAX;
        else if(n<0) x = 1/x, n = -n;
        double res = 1;
        while(n)
        {
            if(n&1) res = res*x;
            x*=x;
            n >>=1;
        }
        return res;
    }
};
