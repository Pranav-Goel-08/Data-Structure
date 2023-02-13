class Solution {
public:

    void merge(vector<int> &nums,int start,int mid,int end){
        int len1 = mid - start + 1;
        int len2 = end - mid;

        int *first = new int[len1];
        int *second = new int[len2];

        int i=0;
        for(int index = start ; index<=mid;index++){
            first[i] = nums[index];
            i++;
        }
        int j = 0;
        for(int index = mid+1;index<=end;index++){
            second[j] = nums[index];
            j++;
        }
        int originalIndex = start;
        int index1 = 0;
        int index2 = 0;
        while(index1<len1 && index2<len2){
            if(first[index1]<second[index2]){
                nums[originalIndex] = first[index1];
                index1++;
                originalIndex++;
            }
            else{
                nums[originalIndex] = second[index2];
                index2++;
                originalIndex++;
            }
        }
        while(index1 < len1){
            nums[originalIndex] = first[index1];
                index1++;
                originalIndex++;
        }
        while(index2 < len2){
            nums[originalIndex] = second[index2];
                index2++;
                originalIndex++;
        }
    }
    void mergeSort(vector<int>& nums,int start , int end){
        if(start>=end){
            return;
        }
        int mid = start + (end-start)/2;
        // left part
        mergeSort(nums,start,mid);
        // right part
        mergeSort(nums,mid+1,end);

        merge(nums,start,mid,end);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};