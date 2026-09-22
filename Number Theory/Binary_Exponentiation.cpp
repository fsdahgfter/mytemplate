ll binpow(ll a, ll b, ll mod) {
    ll res = 1; a %= mod;
    while(b) {
        if(b & 1) res = res * a % mod;
        b >>= 1;
        a = a * a % mod;
    }
    return res;
}
