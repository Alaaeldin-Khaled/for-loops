#include <iostream>
using namespace std;

bool isPrime(int n) {

    bool prime = true;

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
}
