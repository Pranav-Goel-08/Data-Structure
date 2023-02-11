#include<iostream>
using namespace std;

int binarySearch(int *arr, int start , int end , int target){
    if(start>end){
        return -1;
    }
    int mid = start + (end-start)/2;

    if (target == arr[mid])
    {
        return mid;
    }
    else if(target < arr[mid]){
        return binarySearch(arr,start,mid-1,target);
    }
    else{
        return binarySearch(arr,mid+1,end,target);
    }  
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
    int start = 0;
    int end = n-1;
    int target ;
    cout<<"Enter the target element : ";
    cin >> target;

    cout<<binarySearch(arr,start,end,target);
    
}
