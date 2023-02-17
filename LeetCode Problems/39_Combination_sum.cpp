class Solution {
public:
    void solve(vector<int>& candidates, int target,vector<int> output,vector<vector<int>> &ans,int current_sum,int index){
        if(current_sum>target){
            return ;
        }
        if(current_sum == target){
            ans.push_back(output);
            return;
        }

        for(int i = index ; i < candidates.size() ; i++){
            output.push_back(candidates[i]);
            current_sum += candidates[i];
            solve(candidates,target,output,ans,current_sum,i);
            output.pop_back();
            current_sum -= candidates[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> output;
        vector<vector<int>> ans;
        int index = 0;
        int current_sum = 0;
        solve(candidates, target,output,ans,current_sum,index);
        return ans;
    }
};