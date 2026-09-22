const int base = 256;
const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n;
int pw[N], h[N];
string s;

int getHash(int l, int r) {
    return (h[r] - 1ll * h[l - 1] * pw[r - l + 1] % MOD + MOD) % MOD;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> s;
    n = s.size();
    s = ' ' + s;

    pw[0] = 1;
    FOR(i, 1, n) {
        pw[i] = 1ll * pw[i - 1] * base % MOD;
        h[i] = (1ll * h[i - 1] * base + s[i] - 'a' + 1) % MOD;
    }
    
    return 0;
}
