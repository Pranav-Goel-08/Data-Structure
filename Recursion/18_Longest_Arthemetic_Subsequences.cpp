#include<bits/stdc++.h>
using namespace std;
int subsequences(int i , int arr[] , int diff){
    if(i<0)
    return 0;
    int ans = 0;
    for(int k=i-1;k>=0;k--){
        if(arr[i]-arr[k]==diff){
            ans = max(ans,1+subsequences(k,arr,diff));
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff = arr[j] - arr[i];
            ans = max(ans,2+subsequences(i,arr,diff));
        }
    }
    cout<<"LAS is : "<<ans<<endl;
}