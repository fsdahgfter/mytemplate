const int N = 1e5 + 5;

vector<int> adj[N];

int timer;
int depth[N], sz[N], par[N];
int head[N], tin[N], heavy[N];

void dfs(int u) {
    sz[u] = 1;
    int mx = 0;
    for(int v : adj[u]) if(v != par[u]) {
        depth[v] = depth[u] + 1;
        par[v] = u;
        dfs(v, u);
        sz[u] += sz[v];
        if(maximize(mx, sz[v])) heavy[u] = v;
    }
}

void decompose(int u, int h) {
    head[u] = h;
    tin[u] = ++timer;
    if(heavy[u]) decompose(heavy[u], h);
    for(int v : adj[u]) if(v != par[u] && v != heavy[u]) decompose(v, v);
}

int update(int l, int r) {
    //update
}

void queryUpdate(int u, int v) {
    while(head[u] != head[v]) {
        if(depth[head[u]] < depth[head[v]]) swap(u, v);
        update(tin[head[u]], tin[u]);
        u = par[head[u]];
    }
    if(depth[u] < depth[v]) swap(u, v);
    update(tin[v], tin[u]);
}

int get(int l, int r) {
    // get
}

void queryGet(int u, int v) {
    // same queryUpdate
}
