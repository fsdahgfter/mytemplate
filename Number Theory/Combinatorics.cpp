const int N = ;
const int MOD = 998244353;

int fact[N + 5], inv[N + 5];

void pre_compute() {
    fact[0] = 1;
    FOR(i, 1, N) fact[i] = 1ll * fact[i - 1] * i % MOD;
    inv[N] = binpow(fact[N], MOD - 2, MOD);
    FORD(i, N - 1, 0) inv[i] = 1ll * inv[i + 1] * (i + 1) % MOD;
}
