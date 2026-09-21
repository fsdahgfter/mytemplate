vector<pii> adj[N];
ll dist[N];

void dijkstra(int s) {
    memset(dist, 0x3f, sizeof dist);
    priority_queue<pll, vector<pll>, greater<pll>> q;
    q.emplace(dist[s] = 0, s);

    while(!q.empty()) {
        int u = q.top().se;
        ll d = q.top().fi; q.pop();
        if(dist[u] < d) continue;
        for(pii e : adj[u]) if(dist[e.fi] > d + e.se) q.emplace(dist[e.fi] = d + e.se, e.fi);
    }
}
