bool isPossible(vector<int> &boards, int k,int mid){
    int painter = 1;
    int minimumTime = 0;

    for(int i = 0 ; i< boards.size() ; i++){
        if(minimumTime + boards[i] <= mid){
            minimumTime += boards[i];
        }
        else{
            painter++;
            if(boards[i]>mid || painter > k){
                return false;
            }
            minimumTime = boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = 0;
    int sum = 0;
    for(int i = 0 ; i <boards.size() ;i++){
        sum += boards[i];
    }
    int end = sum;
    int ans = -1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(isPossible(boards,k,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans ;
}