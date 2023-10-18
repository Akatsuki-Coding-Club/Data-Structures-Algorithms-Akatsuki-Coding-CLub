#include<bits/stdc++.h>
using namespace std;

class Solution{
 public:

 void dfs(int i,vector<int>& visited,vector<int> adj[],vector<int>& ans){
        
        // as u start exploring a node,mark it as visited as now u would not want it to re-explore
        visited[i]=1;
        
        ans.push_back(i);
        
        //traversing through all nodes connected to i
        for(int j:adj[i]){
            
            //if node is UNvisited only then we make a dfs call otherwise time complexity will increase
            if(visited[j]==0){
                dfs(j,visited,adj,ans);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        //not making answer array global keeping in mind data-hiding concept 
        vector<int> ans;
        
        //visited array is made so that one node can be visited once
        vector<int> visited(V,0);
        
        //funtion call
        dfs(0,visited,adj,ans);
        
        return ans;
    }

}

int main() {

    int tc;
    cin >> tc;  
    while ( tc--) {
        int V, E;
        cin >> V >>E ;
        vector<int> adj[V];

        for (int i = 0 ; i < E ; i ++){ 
            int u, v; 
            cin >> u >> v; 
            adj[u].push_back(v); 
            adj[v].push_back(u);

    } 

Solution obj; 
vector<int> ans = obj.dfsOfGraph (V, adj);

for (int i = 0 ; i < ans.size(); i++) {
    cout << ans[i] << " ";
}

cout << endl;

}

return 0;

}