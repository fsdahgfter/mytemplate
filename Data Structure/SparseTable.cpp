struct SparseTable {
    struct node {
        // data type
        node operator + (const node &a) {
            node res;
            // process
            return res;
        }
    }; vector<vector<node>> st;
    SparseTable(int n, vector<int> &a) {
        int LG = __lg(n);
        st.assign(LG + 1, vector<node>(n + 1));

        FOR(i, 1, n) { st[0][i] = /* */; }
        FOR(i, 1, LG) FOR(j, 1, n - (1 << i) + 1) {
            st[i][j] = st[i - 1][j] + st[i - 1][j + (1 << i - 1)];
        }
    }

    node get(int l, int r) { // a op b op c = a op b op b op c
        int k = __lg(r - l + 1);
        return st[k][l] + st[k][r - (1 << k) + 1];
    }

    node get(int l, int r) { // a op b op c != a op b op b op c
        int diff = r - l + 1;
        node res;
        REP(i, __lg(r - l + 1) + 1) if(diff >> i & 1) {
            next = next + st[i][l];
            l += (1 << i);
        }
        return res;
    }
};
