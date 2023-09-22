#include <iostream>
using namespace std;

void printPrimes() {
    bool first_print = true;
    for (int i = 2; i <= 500; i += 1) {
        bool isPrime = true;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            if (!first_print)
                cout <<", ";

            cout << i;
            first_print = false;
        }
    }
}
