class Solution{
    bool isSafe(int newx , int newy , int n , vector<vector<int>> &visited,vector<vector<int>> &m){
        if((newx>=0 && newx<n) && (newy >=0 && newy < n) && visited[newx][newy] == 0 && m[newx][newy]==1){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(int x, int y , int n,vector<vector<int>> &m,vector<string> &ans,vector<vector<int>> visited,string path){
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return ;
        }
        
        visited[x][y] = 1;
        if(isSafe(x+1,y,n,visited,m)){
            solve(x+1,y,n,m,ans,visited,path +'D');
        }
        if(isSafe(x,y-1,n,visited,m)){
            solve(x,y-1,n,m,ans,visited,path+'L');
        }
        if(isSafe(x,y+1,n,visited,m)){
            solve(x,y+1,n,m,ans,visited,path+'R');
        }
        if(isSafe(x-1,y,n,visited,m)){
            solve(x-1,y,n,m,ans,visited,path+'U');
        }
        visited[x][y] = 0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans ;
        if(m[0][0]==0){
            return ans;
        }
        string path = "";
        vector<vector<int>> visited(n,vector<int> (n,0));
        solve(0,0,n,m,ans,visited,path);
        return ans;
    }
};