struct SegmentTree {
    struct node {
        // data type
        node operator + (const node &a) {
            node res;
            // process
            return res;
        }
    }; vector<node> st;
    SegmentTree(int n) : st(n + 5 << 2) {}

    void build(int id, int l, int r) {
        if(l == r) {
            // do sth
        } else {
            int m = l + r >> 1;
            build(id << 1, l, m);
            build(id << 1 | 1, m + 1, r);
            st[id] = st[id << 1] + st[id << 1 | 1];
        }
    }

    void update(int id, int l, int r, int pos, node val) {
        if(l == r) {
            st[id] = val; // or do sth else
        } else {
            int m = l + r >> 1;
            if(pos <= m) update(id << 1, l, m, pos, val);
            else update(id << 1 | 1, m + 1, r, pos, val);
            st[id] = st[id << 1] + st[id << 1 | 1];
        }
    }

    node get(int id, int l, int r, int u, int v) {
        if(u <= l && r <= v) return st[id];
        int m = l + r >> 1;
        if(v <= m) return get(id << 1, l, m, u, v);
        if(m < u) return get(id << 1 | 1, m + 1, r, u, v);
        return get(id << 1, l, m, u, v) + get(id << 1 | 1, m + 1, r, u, v);
    }
};
