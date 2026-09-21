struct edge {
    int u, v, w;
    bool operator < (const edge &a) const {
        return w < a.w;
    }
};

ll getMST(vector<edge> &edges) {
    DSU dsu;
    sort(all(edges));
    
    ll mst = 0;
    for(edge &i : edges) if(dsu.unite(i.u, i.v)) {
        mst += i.w;
    }

    return mst;
}
