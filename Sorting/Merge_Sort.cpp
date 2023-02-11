#include<iostream>
using namespace std;

void merge(int arr[],int start , int mid , int end){
    int len1 = mid -start + 1;
    int len2 = end - mid;

    int *first = new int [len1];
    int *second = new int [len2];

    int i=0;
    for(int index = start ; index<=mid ; index++){
        first[i] = arr[index];
        i++;
    }

    int j=0;
    for(int index= mid+1 ; index<=end;index++){
        second[j] = arr[index];
        j++;
    }

    int originalArrayIndex = start;
    int index1 = 0;
    int index2 = 0;
    while (index1 <len1 && index2 <len2){
        if(first[index1] < second[index2]){
            arr[originalArrayIndex] = first[index1];
            index1++;
            originalArrayIndex++;
        }
        else{
            arr[originalArrayIndex] = second[index2];
            index2++;
            originalArrayIndex++;
        }
    }
    while (index1<len1)
    {
        arr[originalArrayIndex] = first[index1];
            index1++;
            originalArrayIndex++;
    }
    while(index2<len2){
        arr[originalArrayIndex] = second[index2];
            index2++;
            originalArrayIndex++;
    }
}
void mergeSort(int arr[],int n , int start , int end){
    if(start>=end)
    return;

    int mid = start + (end - start)/2;

    mergeSort(arr,n,start,mid);

    mergeSort(arr,n,mid+1,end);

    merge(arr,start,mid,end);
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

    mergeSort(arr,n,start,end);
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}
