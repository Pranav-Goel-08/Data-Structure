#include<iostream>
using namespace std;
int getfib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    int ans = getfib(n-1) + getfib(n-2);
    return ans;
    
}
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin >> n;
    cout<<"\nThe fibonnacci number is : ";
    cout<<getfib(n);
}