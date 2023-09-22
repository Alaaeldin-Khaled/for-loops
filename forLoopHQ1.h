#include <iostream>
using namespace std;

void printingX(int n) {
    int back = 0, front = n - 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == back || j == front)
                cout << '*';
            else
                cout << " ";
        }
        cout << endl;
        ++back;
        --front;
    }

}
