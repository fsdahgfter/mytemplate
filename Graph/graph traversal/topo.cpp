int deg[N];

//...

void topoSort(vector<int> &topo) {
    queue<int> q;
    FOR(i, 1, n) if(!deg[i]) q.emplace(i);

    while(!q.empty()) {
        int u = q.front(); q.pop(); topo.emplace_back(u);
        for(int v : adj[u]) if(!--deg[v]) q.emplace(v);
    }
}
