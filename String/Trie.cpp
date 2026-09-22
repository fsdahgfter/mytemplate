struct node {
    int child[26];
    bool isEnd;
    Node() : isEnd(0) { memset(child, -1, sizeof child); }
}; vector<node> T;

void add(string &s) {
    int p = 0;
    for(char c : s) {
        int k = c - 'a';
        if(T[p].child[k] == -1) {
            T[p].child[k] = T.size();
            T.emplace_back();
        }
        p = T[p].child[k];
    }
    T[p].isEnd = 1;
}

int main() {
    T.emplace_back();
}
