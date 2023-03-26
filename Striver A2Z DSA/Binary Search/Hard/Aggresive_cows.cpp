bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cows = 1;
    int firstPosition = stalls[0];

    for(int i=0;i<stalls.size();i++){
        if(stalls[i] - firstPosition >= mid){
            cows++;
            if(cows == k){
                return true;
            }
            else{
                firstPosition = stalls[i];
            }
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int start = 0;
    int maxi = -1;
    for(int i = 0 ; i < stalls.size() ; i++){
        maxi = max(maxi,stalls[i]);
    }
    int end = maxi;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(isPossible(stalls,k,mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}