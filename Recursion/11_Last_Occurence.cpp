#include<iostream>
using namespace std;
int solve(int arr[],int n ,int index,int target){
    if(index<0){
        return -1;
    }
    if(arr[index]==target)
        return index;
    return solve(arr,n,index-1,target);
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

    int index = n-1;
    int target ;
    cout<<"\nEnter the target element : ";
    cin>>target;
    cout<<solve(arr,n,index,target);
    
}