#include<iostream>
using namespace std;
#include"sudoku.h"
#include<stdlib.h>
#include<time.h>

int main() {
    sudoku a[81];
    sudoku n[81];
    int b,c,d,i,e=0,f=0;
    for(i=0; i<81; ++i) {
        a[i].number=0;
    }
    a[0].number=3;
    a[2].number=2;
    a[5].number=5;
    a[6].number=6;
    a[7].number=9;
    a[10].number=4;
    a[13].number=9;
    a[14].number=6;
    a[16].number=3;
    a[19].number=5;
    a[23].number=8;
    a[27].number=1;
    a[28].number=9;
    a[31].number=8;
    a[33].number=7;
    a[35].number=3;
    a[45].number=5;
    a[47].number=7;
    a[49].number=3;
    a[52].number=6;
    a[53].number=1;
    a[57].number=8;
    a[61].number=2;
    a[64].number=8;
    a[66].number=9;
    a[67].number=6;
    a[70].number=7;
    a[73].number=6;
    a[74].number=5;
    a[75].number=7;
    a[78].number=3;
    a[80].number=9;
    srand(time(NULL));
    c=rand()%9+1;
    d=rand()%9+1;
    while(d==c) {
        d=rand()%9+1;
    }
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

    c=rand()%3;
    d=rand()%3;
    while(d==c) {
        d=rand()%3;
    }
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

    c=rand()%3;
    d=rand()%3;
    while(d==c) {
        d=rand()%3;
    }

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
    f=0;

    c=rand()%4;
    while(c>0) {
        for (i = 0; i < 81; ++i) {
            n[i].number = a[i].number;
        }
        for (i = 0; i < 81; ++i) {
            a[(8-i/9)+9*(i % 9)].number = n[i].number;
        }
        --c;
    }
    c=rand()%2;
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
    for (b = 0; b < 9; ++b) {
        for(c=0; c<9; ++c) {
            printf("%d", a[c+b*9].number);
            if(c!=8) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
