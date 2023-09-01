#include<bits/stdc++.h>
using namespace std;

bool isCycle(int src, vector<vector<int>> &adj, vector<bool> &visited, int parent){
    visited[src]=true;
    for(auto i: adj[src]){
        if(i!=parent){
            if(visited[i])
               return true;
            if(!visited[i] && isCycle(i,adj,visited,src))
               return true;
        }
    }
    return false;
}

int32_t main(){
    int n, m;cin >>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v); 
        adj[u].push_back(v);   
        
    }
    bool cycle=false;
    vector<bool> visited(n,false);
    for(int i=0; i<n; i++){
        if(!visited[i] && isCycle(i,adj,visited,-1))
          cycle=true;
    }
    if(cycle)
       cout<<"cycle is present";
    else
       cout<<"cycle is not present";
    return 0;

}


