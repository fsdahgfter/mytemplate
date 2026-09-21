vector<int> adj[N];
int dist[N];

void bfs(int s) {
    memset(dist, -1, sizeof dist);
    queue<int> q; q.emplace(s);
    dist[s] = 0;

    while(!q.empty()) {
        int u = q.front(); q.pop();
        for(int v : adj[u]) if(dist[v] == -1) {
            dist[v] = dist[u] + 1;
            q.emplace_back(v);
        }
    }
}
