ll dist[N][N];

void process() {
    FOR(k, 1, n) FOR(i, 1, n - 1) FOR(j, i + 1, n) if(minimize(dist[i][j], dist[i][k] + dist[k][j])) dist[j][i] = dist[i][j];
}
