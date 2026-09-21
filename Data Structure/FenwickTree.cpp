struct BIT {
    vector<ll> bit;
    BIT(int n) : bit(n + 1) {}
    void update(int id, ll val) { for(; id < bit.size(); id += id & -id) bit[id] += val; }
    ll get(int id) { ll res = 0; for(; id > 0; id -= id & -id) res += bit[id]; return res; }
};
