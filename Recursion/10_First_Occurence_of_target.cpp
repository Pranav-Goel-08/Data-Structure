#include<iostream>
using namespace std;

// Method 1
int solve(int arr[], int n , int index , int target){
    if(index==n){
        return -1;
    }
    if(arr[index]==target){
        return index;
    }
    return solve(arr,n,index+1,target);
}

// Method 2
int solve1(int arr[], int n , int index , int target){
    if(index==n){
        return -1;
    }
    if(arr[0]==target){
        return index;
    }
    return solve1(arr+1,n,index+1,target);
}

// Method 3
void solve2(int arr[], int n , int index , int target){
    if(index==n){
        cout<<"Element not present";
        return;
    }
    int ans ;
    if(arr[index]==target){
        ans = index;
        cout<<ans<<endl;
    }
    else {
        solve2(arr,n,index+1,target);
    }
}
int main(){
    int n ;
    cout<<"Enter the number of elements in an array : ";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int index = 0;
    int target ;
    cout<<"\nEnter the target value : ";
    cin>>target;
    cout<<solve(arr,n,index,target)<<endl;
    cout<<solve1(arr,n,index,target)<<endl;
    solve2(arr,n,index,target);
}
