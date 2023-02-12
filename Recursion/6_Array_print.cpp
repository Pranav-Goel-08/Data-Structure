#include<iostream>
using namespace std;

void solve(int arr[],int n,int index){
    if(n==index){
        return;
    }
    cout<<arr[index]<<" ";
    solve(arr,n,index+1);
}
int main (){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int index = 0;
    int arr[n];
    for(int i=index;i<n;i++){
        cin>>arr[i];
    }
    solve(arr,n,index);
}