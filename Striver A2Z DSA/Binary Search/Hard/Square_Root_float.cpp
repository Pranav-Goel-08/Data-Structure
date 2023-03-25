#include<bits/stdc++.h>
using namespace std;
int getInteger(int x) {
        long long int s = 0;
        long long int e = x;
        long long int ans = -1;
        while(s<=e){
            long long int mid = s + (e - s)/2;
            if(mid*mid == x){
                return mid;
            }
            else if(mid * mid < x){ 
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid -1;
            }
        }
        return ans;
}
double getNumber(int n , int precision , int tempsolve){
    double factor = 1;
    double ans = tempsolve;
    for(int i = 0 ; i < precision ; i++){
        factor = factor/10;
        for(double j = ans ; j * j < n ; j = j + factor){
            ans = j;
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int tempsolve = getInteger(n);
    cout<< "Answer is : " <<getNumber(n,3,tempsolve)<<endl;
}
