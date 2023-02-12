#include<iostream>
using namespace std;
// void solve(int arr[],int index,int n){
//     if(index==n){
//         return;
//     }
//     solve(arr,index+1,n);
//     cout<<arr[index]<<" ";
// }
void solve(int arr[],int index,int n){
    if(index<0){
        return;
    }
    cout<<arr[index]<<" ";
    solve(arr,index-1,n);
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int index=n-1;
    solve(arr,index,n);
}