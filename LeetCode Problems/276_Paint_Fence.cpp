#include<iostream>
using namespace std;

int solve(int n , int k){
    if(n==0)
    return 0;
    if(n==1)
    return k;
    if(n==2)
    return k*k;

    int same = solve(n-2,k);
    int different = solve(n-1,k);

    return (k-1)*(same+different);
}
int main (){
    int n;
    cout<<"Enter the number of Fence : ";
    cin >> n;

    int k;
    cout<<"Enter the no. of Paints : ";
    cin >> k;

    cout<<"No. of Ways are : "<<solve(n,k)<<endl;
    return 0;


}