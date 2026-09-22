ll gcd(ll a, ll b, ll &x, ll &y) {
    if(!b) {
        x = 1;
        y = 0;
        return a;
    }

    ll x1, y1;
    ll g = gcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - y1 * (a / b);
    return g;
}

// ax + by = c (c % gcd(a, b) == 0)
// x = x0 + k * c / g
// y = y0 - k * c / g
