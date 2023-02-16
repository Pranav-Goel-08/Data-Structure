class Solution {
public:
    void solve(vector<int>& nums,int index,vector<int> ans,vector<vector<int>> &output){
        if(index==nums.size()){
            output.push_back(ans);
            return;
        }
        // Exclude
        solve(nums,index+1,ans,output);
        // Include
        ans.push_back(nums[index]);
        solve(nums,index+1,ans,output);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> output ;
        int index = 0;
        solve(nums,index,ans,output);
        return output;
    }
};