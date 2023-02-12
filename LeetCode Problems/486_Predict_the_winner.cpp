class Solution {
public:
    int solve(vector<int>&nums,int i, int j){
        if(i>j){
            return 0;
        }
        if(i==j){
            return nums[i];
        }
        int option1 = nums[i] + min(solve(nums,i+2,j),solve(nums,i+1,j-1));
        int option2 = nums[j] + min(solve(nums,i+1,j-1),solve(nums,i,j-2));
 
        return max(option1 , option2);
    }
    bool PredictTheWinner(vector<int>& nums) {
        int p1Score = solve(nums,0,nums.size()-1);
        int total_Score = 0;
        for(int i=0;i<nums.size();i++){
            total_Score += nums[i];
        }
        int p2Score = total_Score - p1Score;
        if(p1Score>=p2Score){
            return true;
        }
        else{
            return false;
        }
    }
};