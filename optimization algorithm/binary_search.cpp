bool check() {
    return ;
}

//max ver
int binarySearch(int low, int high) {
    int res = low;
    while(low <= high) {
        int mid = low + high >> 1;
        if(check(mid)) {
            res = mid;
            low = mid + 1;
        } else high = mid - 1;
    }
    return res;
}
