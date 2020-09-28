#include <iostream>
using namespace std;
#include "sudoku.h"


int main() {
    sudoku a[81];
    sudoku n[81];
    int b, c, d, i, e = 0, f = 0;
    for (b = 0; b < 9; b++) {
        cin >> a[b*9].number >> a[b*9 + 1].number >> a[b*9 + 2].number >> a[b*9 + 3].number >> a[b*9 + 4].number >> a[b*9 + 5].number >> a[b*9 + 6].number >> a[b*9 + 7].number >> a[b*9 + 8].number;
    }
    b=0;
    while (true) {
        cin >> b;
        if (b == 0) {
            break;
        }
        switch (b) {
        case 1: {
            cin >> c >> d;
            for (i = 0; i < 81; ++i) {
                n[i].number = a[i].number;
            }
            for (i = 0; i < 81; ++i) {
                if (n[i].number == c) {
                    a[i].number = d;
                }
                if (n[i].number == d) {
                    a[i].number = c;
                }
            }
            break;
        }
        case 2: {
            cin >> c >> d;
            for (i = 0; i < 81; ++i) {
                n[i].number = a[i].number;
            }
            for (i = 0; i < 81; ++i) {
                if (i >= 27 * d&&i < 27 * (d + 1)) {
                    a[27 * c + e].number = n[i].number;
                    a[i].number = n[27 * c + e].number;
                    ++e;
                }
            }
            e = 0;
            break;
        }
        case 3: {
            cin >> c >> d;
            for (i = 0; i < 81; ++i) {
                n[i].number = a[i].number;
            }
            for (i = 0; i < 81; ++i) {
                if ((i %9)/3 == d) {
                    a[3 * c + e + 9 * f].number = n[i].number;
                    a[i].number= n[3 * c + e + 9 * f].number;
                    ++e;
                    if (e > 2) {
                        e = 0;
                        ++f;
                    }
                }
            }
            e = 0;
            f = 0;
            break;
        }
        case 4: {
            cin >> c;
            while(c>0) {
                for (i = 0; i < 81; ++i) {
                    n[i].number = a[i].number;
                }
                for (i = 0; i < 81; ++i) {
                    a[(8-i/9)+9*(i % 9)].number = n[i].number;
                }
                --c;
            }
            break;
        }
        case 5: {
            cin >> c;
            for (i = 0; i < 81; ++i) {
                n[i].number = a[i].number;
            }
            for (i = 0; i < 81; ++i) {
                if (c == 0) {
                    a[(8 - i / 9) * 9 + i % 9].number = n[i].number;
                } else if (c == 1) {
                    a[8 - i % 9 + 9 * (i / 9)].number = n[i].number;
                }
            }
            break;
        }
        }
    }
    for (i = 0; i < 9; i++) {
        for (b = 0; b < 9; b++) {
            cout << a[b + i * 9].number;
            if(b!=8) {
                cout<<" ";
            }
        }
        cout << endl;

    }
    return(0);
}
