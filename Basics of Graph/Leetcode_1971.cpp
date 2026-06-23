class Solution {
public:
bool dfs(vector<bool>&vis,int src,int dest,vector<vector<int>>&adj){
    if(src==dest)return true;
    vis[src]=true;
    for(int neighbour:adj[src]){
       if(!vis[neighbour]){
         if(dfs(vis,neighbour,dest,adj))return true;
       }
    }
    return false;
}

    bool validPath(int n, vector<vector<int>>& edges, int src, int dest) {
      vector<vector<int>>adj(n);
      for(auto& edge:edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
      }
      vector<bool>vis(n,false);
      return dfs(vis,src,dest,adj);
      
    }
};
