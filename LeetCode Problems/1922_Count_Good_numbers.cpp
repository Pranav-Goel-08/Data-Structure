class Solution {
public:
    int m=1e9+7;
    
    long long binary(long long n,long long pow)
    {
        if(pow==1) return n;
        if(pow==0) return 1;
        
        long long res = binary(n,pow/2)%m;
        
        if(pow%2==0)
            return (res*res)%m;
        else
            return (n%m * (res*res))%m;
    }
    
    int countGoodNumbers(long long n) {
        if(n%2==0)
            return (binary(5,n/2)*binary(4,n/2)%m)%m;            // if n is even then no. of even place be n/2 & odd places be n/2
        
        return (binary(5,n/2+1)*binary(4,n/2)%m)%m;           // if n is odd then no. of even place be n/2+1 & odd places be n/2
    }
};