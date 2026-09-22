const int maxA = ;

bool not_prime[maxA + 5];
// vector<int> primes;

void sieve() {
    not_prime[0] = not_prime[1] = 1;
    for(int i = 2; i * i <= maxA; ++i) if(!not_prime[i]) {
        for(int j = i * i; j <= maxA; j += i) not_prime[j] = 1;
    }

    // for(int i = 2; i * i <= maxA; ++i) if(!not_prime[i]) primes.emplace_back(i);
}
