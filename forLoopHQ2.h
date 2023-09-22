#include <iostream>
using namespace std;

void findAllPairs() {

//        int cnt = 0;
//
//        for (int i = 50; i <= 300; ++i) {
//            for (int j = 70; j <= 400; ++j) {
//                if (i < j && (i + j) % 7 == 0)
//                    ++cnt;
//            }
//        }
//
//        cout << cnt;

        int cnt = 0;

        for (int i = 50; i <= 300; ++i) {

            int start = 70;
            if (start < i + 1)
                start = i + 1;

            for (int j = start; j <= 400; ++j) {
                if (i < j && (i + j) % 7 == 0)
                    ++cnt;
            }
        }

        cout << cnt;

}
