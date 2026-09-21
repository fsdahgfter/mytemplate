#include <bits/stdc++.h>
using namespace std;

const string NAME = "";

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int rd(int l, int r) {
    return abs(rng() % (r - l + 1)) + l;
}

void generate_test() {
    ofstream inp((NAME + ".INP").c_str());
    // do sth
    inp.close();
}

int main() {
    for(int iTest = 1; iTest <= 100; ++i) {
        generate_test();
        system((".\\" + NAME + ".exe").c_str());
        system((".\\" + NAME + "_trau.exe").c_str());
        if(system(("fc " + NAME + ".OUT " + NAME + ".ANS").c_str())) {
            cout << iTest << ": WA\n";
            exit(0);
        } else {
            cout << iTest << ": AC\n";
        }
    }
    
    return 0;
}
