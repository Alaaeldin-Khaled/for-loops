#include <iostream>
using namespace std;

int digitsSum(int n, int a, int b) {
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        int temp = i, sum = 0;
        while (temp) {
            sum = sum + (temp % 10);
            temp /= 10;
        }
        if (sum >= a && sum <= b)
            cnt += i;
    }
    cout << cnt;
}
