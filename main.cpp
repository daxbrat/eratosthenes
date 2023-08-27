#include <iostream>
#include <vector>

using namespace std;

int main() {
    int limit_entry{};
    cout << "Enter max number to find primes: ";
    cin >> limit_entry;
    const int limit = limit_entry;
    vector<bool> isPrime(limit + 1, true);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    std::cout << "Prime numbers between 1 and " << limit << " are:\n";
    for (int i = 2; i <= limit; ++i) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }

    return 0;
}
