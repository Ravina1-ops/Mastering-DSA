// homework question segmented sieve

#include <bits/stdc++.h>
using namespace std;

// Simple sieve to generate primes up to sqrt(R)
vector<int> simpleSieve(int limit) {
    vector<bool> mark(limit + 1, true);
    mark[0] = mark[1] = false;
    for (int p = 2; p * p <= limit; p++) {
        if (mark[p]) {
            for (int i = p * p; i <= limit; i += p)
                mark[i] = false;
        }
    }
    vector<int> primes;
    for (int p = 2; p <= limit; p++) {
        if (mark[p]) primes.push_back(p);
    }
    return primes;
}

// Segmented sieve to find primes in [L, R]
vector<long long> segmentedSieve(long long L, long long R) {
    if (L > R) return {};

    long long limit = floor(sqrt(R)) + 1;
    vector<int> primes = simpleSieve(limit);

    vector<bool> isPrime(R - L + 1, true);

    for (int p : primes) {
        long long start = max((long long)p * p, ((L + p - 1) / p) * (long long)p);
        for (long long j = start; j <= R; j += p) {
            isPrime[j - L] = false;
        }
    }

    // Handle case when L = 1 (1 is not prime)
    if (L == 1) isPrime[0] = false;

    vector<long long> result;
    for (long long i = 0; i <= R - L; i++) {
        if (isPrime[i]) result.push_back(L + i);
    }
    return result;
}

int main() {
    long long L, R;
    cout << "Enter range [L R]: ";
    if (!(cin >> L >> R) || L < 1 || R < 1) {
        cerr << "Invalid input. Please enter positive integers.\n";
        return 1;
    }

    vector<long long> primes = segmentedSieve(L, R);

    cout << "Primes in range [" << L << ", " << R << "]:\n";
    for (long long p : primes) {
        cout << p << " ";
    }
    cout << "\n";

    return 0;
}

//  pigeon hole principle
//  catalon number
// inclusion and exclusion number