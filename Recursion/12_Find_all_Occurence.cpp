#include<bits/stdc++.h>
using namespace std;
// Method 1
// void solve(int arr[],int n ,int index,int target){
//     if(index==n){
//         return;
//     }
//     if(arr[index]==target)
//         cout<<index<<" ";
//     solve(arr,n,index+1,target);
// }

// Method 2
void solve(int arr[],int n ,int index,int target,vector<int> &ans){
    if(index==n){
        return;
    }
    if(arr[index]==target)
        ans.push_back(index);
    solve(arr,n,index+1,target,ans);
}
int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int index = 0;
    int target ;
    vector<int> ans;
    cout<<"\nEnter the target element : ";
    cin>>target;
    solve(arr,n,index,target,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}