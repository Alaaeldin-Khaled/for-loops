#include <iostream>
using namespace std;

/** Reducing Time Complexity
 *  from O(n^4) to O(n^3)
 *  using a simple math trick.
 *
 *
 *
 */

void findAllQuadraples1() {
    int a, b, c, d, cnt = 0;

    for (a = 1; a <= 200; ++a) {
        for (b = 1; b <= 200; ++b) {
            for (c = 1; c <= 200; ++c) {
                for (d = 1; d <= 200; ++d) {
                    if (a + b == c + d)
                        ++cnt;
                }
            }
        }
    }
    cout << cnt << endl;
}


void findAllQuadraples2() {
    int a, b, c, d, cnt = 0;

    for (a = 1; a <= 200; ++a) {
        for (b = 1; b <= 200; ++b) {
            for (c = 1; c <= 200; ++c) {
                d = a + b - c;
                if (d >= 1 && d <= 200)
                    ++cnt;
            }
        }
    }
    cout << cnt << endl;
}
