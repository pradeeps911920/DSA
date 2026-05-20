class Solution {
public:
    double myPow(double x, int n) {
        long n1 = n;
        if(x==1){
            return 1.00000;
        }
        if( x== -1 && n1%2 ==0){
            return 1.00000;
        }
        if( x ==-1 && n1%2!=0 ){
            return -1.00000;
        }

        if(n1<0 ){
            x = 1/x;
            n1 = -n1;
        }

        double ans = 1;
        while(n1>0){
            if(n1%2==1){
                ans = ans*x;

            }
            x = x*x;
            n1 = n1/2;
        }
        return ans;
        
    }
};