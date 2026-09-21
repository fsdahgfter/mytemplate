struct DSU {
    vector<int> lab;
    DSU(int n) : lab(n + 1, -1) {}
    int get(int u) { return lab[u] < 0 ? u : lab[u] = get(lab[u]); }
    bool unite(int u, int v) {
        u = get(u), v = get(v);
        if(u == v) return 0;
        if(lab[u] > lab[v]) swap(u, v);
        lab[u] += lab[v];
        lab[v] = u;
        return 1;
    }
};
