class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
        {
            return 1;
        }

        if(x==0)
        {
            return 0;
        }
       auto power = abs(n);
       double ans = 1;
       while (power>1){
        if(power%2==1){
            ans*=x;
        }
        x=x*x;
        power=power/2;    
       }
       ans=ans*x;
       return n>0? ans : 1/ans;
    }
};
