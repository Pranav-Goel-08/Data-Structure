#include<iostream>
using namespace std;

int solve (int arr[],int index,int n){
    if(index==n){
        return INT_MIN;
    }
    int ans = arr[index];
    int rec = solve(arr,index+1,n);
    return max(ans,rec);
    
}
void solve2(int arr[], int index , int n , int &maxi){
    if(index==n)
        return ;
    maxi = max(maxi,arr[index]);
    solve2(arr,index+1,n,maxi);
}
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int index = 0;
    int maxi = INT_MIN;
    cout<<solve(arr,index,n)<<endl;
    solve2(arr,index,n,maxi);
    cout<<maxi;
}