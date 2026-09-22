void dnc(int l, int r) {
    if(l == r) return;
    int m = l + r >> 1;

    int i = l, j = m + 1;
    
    vector<> tmp;
    
    while(i <= m && j <= r) {
        if(cond) {
            tmp.emplace_back(a[i++]);
        } else {
            tmp.emplace_back(a[j++]);
        }
    }

    while(i <= m) tmp.emplace_back(a[i++]);
    while(j <= r) tmp.emplace_back(a[j++]);
    
    FOR(i, l, r) a[i] = tmp[i - l];
}
