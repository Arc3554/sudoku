#include <iostream>
#include "sudoku.h"
#include "clock.h"
using namespace std;


void setting(sudoku b[], sudoku *poi) {
    int u;
    for (int a = 0; a < 81; ++a, ++poi) {
        if (poi->number != 0) {
            poi->qui = true;
            if (poi->row == 0) {
                for (u = 0; u < 9; ++u) {
                    b[u].n[poi->number] = false;
                }
            } else if (poi->row == 1) {
                for (u = 9; u < 18; ++u) {
                    b[u].n[poi->number] = false;
                }
            } else if (poi->row == 2) {
                for (u = 18; u < 27; ++u) {
                    b[u].n[poi->number] = false;
                }
            } else if (poi->row == 3) {
                for (u = 27; u < 36; ++u) {
                    b[u].n[poi->number] = false;
                }
            } else if (poi->row == 4) {
                for (u = 36; u < 45; ++u) {
                    b[u].n[poi->number] = false;
                }
            } else if (poi->row == 5) {
                for (u = 45; u < 54; ++u) {
                    b[u].n[poi->number] = false;
                }
            } else if (poi->row == 6) {
                for (u = 54; u < 63; ++u) {
                    b[u].n[poi->number] = false;
                }
            } else if (poi->row == 7) {
                for (u = 63; u < 72; ++u) {
                    b[u].n[poi->number] = false;
                }
            } else if (poi->row == 8) {
                for (u = 72; u < 81; ++u) {
                    b[u].n[poi->number] = false;
                }
            }

            if (poi->col == 0) {
                for (u = 0; u < 81; u += 9) {
                    b[u].n[poi->number] = false;
                }
            } else if (poi->col == 1) {
                for (u = 0; u < 81; u += 9) {
                    b[u+1].n[poi->number] = false;
                }
            } else if (poi->col == 2) {
                for (u = 0; u < 81; u += 9) {
                    b[u+2].n[poi->number] = false;
                }
            } else if (poi->col == 3) {
                for (u = 0; u < 81; u += 9) {
                    b[u+3].n[poi->number] = false;
                }
            } else if (poi->col == 4) {
                for (u = 0; u < 81; u += 9) {
                    b[u+4].n[poi->number] = false;
                }
            } else if (poi->col == 5) {
                for (u = 0; u < 81; u += 9) {
                    b[u+5].n[poi->number] = false;
                }
            } else if (poi->col == 6) {
                for (u = 0; u < 81; u += 9) {
                    b[u+6].n[poi->number] = false;
                }
            } else if (poi->col == 7) {
                for (u = 0; u < 81; u += 9) {
                    b[u+7].n[poi->number] = false;
                }
            } else if (poi->col == 8) {
                for (u = 0; u < 81; u += 9) {
                    b[u+8].n[poi->number] = false;
                }
            }

            if (poi->squ == 0) {
                b[0].n[poi->number] = false;
                b[1].n[poi->number] = false;
                b[2].n[poi->number] = false;
                b[9].n[poi->number] = false;
                b[10].n[poi->number] = false;
                b[11].n[poi->number] = false;
                b[18].n[poi->number] = false;
                b[19].n[poi->number] = false;
                b[20].n[poi->number] = false;
            } else if (poi->squ == 1) {
                b[3].n[poi->number] = false;
                b[4].n[poi->number] = false;
                b[5].n[poi->number] = false;
                b[12].n[poi->number] = false;
                b[13].n[poi->number] = false;
                b[14].n[poi->number] = false;
                b[21].n[poi->number] = false;
                b[22].n[poi->number] = false;
                b[23].n[poi->number] = false;
            } else if (poi->squ == 2) {
                b[6].n[poi->number] = false;
                b[7].n[poi->number] = false;
                b[8].n[poi->number] = false;
                b[15].n[poi->number] = false;
                b[16].n[poi->number] = false;
                b[17].n[poi->number] = false;
                b[24].n[poi->number] = false;
                b[25].n[poi->number] = false;
                b[26].n[poi->number] = false;
            } else if (poi->squ == 3) {
                b[27].n[poi->number] = false;
                b[28].n[poi->number] = false;
                b[29].n[poi->number] = false;
                b[36].n[poi->number] = false;
                b[37].n[poi->number] = false;
                b[38].n[poi->number] = false;
                b[45].n[poi->number] = false;
                b[46].n[poi->number] = false;
                b[47].n[poi->number] = false;
            } else if (poi->squ == 4) {
                b[30].n[poi->number] = false;
                b[31].n[poi->number] = false;
                b[32].n[poi->number] = false;
                b[39].n[poi->number] = false;
                b[40].n[poi->number] = false;
                b[41].n[poi->number] = false;
                b[48].n[poi->number] = false;
                b[49].n[poi->number] = false;
                b[50].n[poi->number] = false;
            } else if (poi->squ == 5) {
                b[33].n[poi->number] = false;
                b[34].n[poi->number] = false;
                b[35].n[poi->number] = false;
                b[42].n[poi->number] = false;
                b[43].n[poi->number] = false;
                b[44].n[poi->number] = false;
                b[51].n[poi->number] = false;
                b[52].n[poi->number] = false;
                b[53].n[poi->number] = false;
            } else if (poi->squ == 6) {
                b[54].n[poi->number] = false;
                b[55].n[poi->number] = false;
                b[56].n[poi->number] = false;
                b[63].n[poi->number] = false;
                b[64].n[poi->number] = false;
                b[65].n[poi->number] = false;
                b[72].n[poi->number] = false;
                b[73].n[poi->number] = false;
                b[74].n[poi->number] = false;
            } else if (poi->squ == 7) {
                b[57].n[poi->number] = false;
                b[58].n[poi->number] = false;
                b[59].n[poi->number] = false;
                b[66].n[poi->number] = false;
                b[67].n[poi->number] = false;
                b[68].n[poi->number] = false;
                b[75].n[poi->number] = false;
                b[76].n[poi->number] = false;
                b[77].n[poi->number] = false;
            } else if (poi->squ == 8) {
                b[60].n[poi->number] = false;
                b[61].n[poi->number] = false;
                b[62].n[poi->number] = false;
                b[69].n[poi->number] = false;
                b[70].n[poi->number] = false;
                b[71].n[poi->number] = false;
                b[78].n[poi->number] = false;
                b[79].n[poi->number] = false;
                b[80].n[poi->number] = false;
            }
        }
    }


}

bool rule2(sudoku b[], int &a, sudoku *poi) {
    if (poi->number == 0) {
        return(false);
    }
    int c, u, n = 0;
    c = 9 * (poi->row);
    sudoku *temp = &b[c];
    for (u = 0; u < 9; ++u) {
        if ((temp + u)->number == poi->number && (u + c != a)) {
            return(false);
        }
    }
    return(true);
}

bool rule3(sudoku b[], int &a, sudoku*poi) {
    if (poi->number == 0) {
        return(false);
    }
    int c, u, n = 0;
    c = poi->col;
    sudoku *temp = &b[c];
    for (u = 0; u < 81; u += 9) {

        if (temp->number == poi->number && (c + u != a)) {
            return(false);
        }
        temp += 9;
    }
    return(true);
}


bool rule4(sudoku b[], int &a, sudoku *poi) {
    if (poi->number == 0) {
        return(false);
    }
    int c,n = 0;
    for (c = 0; c < 81; c+=27,n+=3) {
        if (poi->squ==n) {
            if (b[c].number == poi->number&&a != c) {
                return(false);
            } else if (b[1 + c].number == poi->number&&a != 1 + c) {
                return(false);
            } else if (b[2 + c].number == poi->number&&a != 2 + c) {
                return(false);
            } else if (b[9 + c].number == poi->number&&a != 9 + c) {
                return(false);
            } else if (b[10 + c].number == poi->number&&a != 10 + c) {
                return(false);
            } else if (b[11 + c].number == poi->number&&a != 11 + c) {
                return(false);
            } else if (b[18 + c].number == poi->number&&a != 18 + c) {
                return(false);
            } else if (b[19 + c].number == poi->number&&a != 19 + c) {
                return(false);
            } else if (b[20 + c].number == poi->number&&a != 20 + c) {
                return(false);
            }
            break;
        } else if (poi->squ == n+1) {
            if (b[3 + c].number == poi->number&&a != 3 + c) {
                return(false);
            } else if (b[4 + c].number == poi->number&&a != 4 + c) {
                return(false);
            } else if (b[5 + c].number == poi->number&&a != 5 + c) {
                return(false);
            } else if (b[12 + c].number == poi->number&&a != 12 + c) {
                return(false);
            } else if (b[13 + c].number == poi->number&&a != 13 + c) {
                return(false);
            } else if (b[14 + c].number == poi->number&&a != 14 + c) {
                return(false);
            } else if (b[21 + c].number == poi->number&&a != 21 + c) {
                return(false);
            } else if (b[22 + c].number == poi->number&&a != 22 + c) {
                return(false);
            } else if (b[23 + c].number == poi->number&&a != 23 + c) {
                return(false);
            }
            break;
        } else if (poi->squ==n+2) {
            if (b[6 + c].number == poi->number&&a != 6 + c) {
                return(false);
            } else if (b[7 + c].number == poi->number&&a != 7 + c) {
                return(false);
            } else if (b[8 + c].number == poi->number&&a != 8 + c) {
                return(false);
            } else if (b[15 + c].number == poi->number&&a != 15 + c) {
                return(false);
            } else if (b[16 + c].number == poi->number&&a != 16 + c) {
                return(false);
            } else if (b[17 + c].number == poi->number&&a != 17 + c) {
                return(false);
            } else if (b[24 + c].number == poi->number&&a != 24 + c) {
                return(false);
            } else if (b[25 + c].number == poi->number&&a != 25 + c) {
                return(false);
            } else if (b[26 + c].number == poi->number&&a != 26 + c) {
                return(false);
            }
            break;
        }
    }
    return(true);
}

int main() {
    int a = 0, c = 0, i;

    sudoku b[81];
    sudoku *poi;
    poi = b;
    while (a < 81) {
        cin >> poi->number;
        poi->setrow(a);
        poi->setcol(a);
        poi->setsqu(a);
        ++poi;
        ++a;
    }
    Clock clk;
    clk.start();
    poi = b;
    setting(b, poi);
    a = 0;
    poi = b;


    while (a < 81) {
        if (poi->number == 0) {
            poi->number = 10;
        }
        ++poi;
        ++a;
    }
    for (a = 0, poi = b; a < 81 && a >= 0;) {
        if (poi->qui == false) {
            --(poi->number);
            if (poi->n[poi->number] == true && rule2(b, a, poi) == true && rule3(b, a, poi) == true && rule4(b, a, poi) == true) {
                c = 2;
                ++a;
                ++poi;
            } else if (poi->number <1) {
                poi->number = 10;
                --a;
                --poi;
                c = 1;
            }
        } else {
            if (c == 1) {
                --a;
                --poi;
            } else {
                ++a;
                ++poi;
            }
        }
    }
    int n;
    if (a < 0) {
        printf("0\n");
    } else {
        int temp[81];
        for (i = 80, poi = &b[80]; i > -1; --i, --poi) {
            temp[i] = poi->number;
            if (poi->qui== false) {
                poi->number = 10;
                n = i;
            }
        }
        b[n].number = temp[n];

        for (a = n, poi = &b[n], c = 2; a < 81 && a >= 0;) {
            if (poi->qui == false) {
                --(poi->number);
                if (poi->n[poi->number] == true && rule2(b, a, poi) == true && rule3(b, a, poi) == true && rule4(b, a, poi) == true) {
                    c = 2;
                    ++a;
                    ++poi;
                } else if (poi->number < 1) {
                    poi->number = 10;
                    --a;
                    --poi;
                    c = 1;
                }
            } else {
                if (c == 1) {
                    --a;
                    --poi;
                } else {
                    ++a;
                    ++poi;
                }
            }
        }

        if (a == -1) {
            printf("1\n");
            for (i = 0; i < 81; i += 9) {
                for (c = 0; c < 9; ++c) {
                    printf("%d", temp[c + i]);
                    if (c != 8) {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        } else if (a == 81) {
            printf("2\n");
        }
    }
    cout << clk.getElapsedTime() << endl;
    return(0);
}

