#include <iostream>
class sudoku {
  public:
    int number;
    void setrow(int a) {
        if (a >= 72) {
            row = 8;
        } else if (a >= 63) {
            row = 7;
        } else if (a >= 54) {
            row = 6;
        } else if (a >= 45) {
            row = 5;
        } else if (a >= 36) {
            row = 4;
        } else if (a >= 27) {
            row = 3;
        } else if (a >= 18) {
            row = 2;
        } else if (a >= 9) {
            row = 1;
        } else if(a>=0) {
            row = 0;
        }
    }
    void setcol(int a) {
        for (int c = 0; c < 81; c += 9) {
            if (a == c) {
                col = 0;
                break;
            } else if (a == c + 1) {
                col = 1;
                break;
            } else if (a == c + 2) {
                col = 2;
                break;
            } else if (a == c + 3) {
                col = 3;
                break;
            } else if (a == c + 4) {
                col = 4;
                break;
            } else if (a == c + 5) {
                col = 5;
                break;
            } else if (a == c + 6) {
                col = 6;
                break;
            } else if (a == c + 7) {
                col = 7;
                break;
            } else if (a == c + 8) {
                col = 8;
                break;
            }
        }
    }
    void setsqu(int a) {
        for (int c = 0; c < 81; c+=27) {
            if (a == c || a == 1 + c || a == 2 + c || a == 9 + c || a == 10 + c || a == 11 + c || a == 18 + c || a == 19 + c || a == 20 + c) {
                if (c == 0) {
                    squ = 0;
                    break;
                } else if (c == 27) {
                    squ = 3;
                    break;
                } else if (c == 54) {
                    squ = 6;
                    break;
                }
            } else if (a == 3 + c || a == 4 + c || a == 5 + c || a == 12 + c || a == 13 + c || a == 14 + c || a == 21 + c || a == 22 + c || a == 23 + c) {
                if (c == 0) {
                    squ = 1;
                    break;
                } else if (c == 27) {
                    squ = 4;
                    break;
                } else if (c == 54) {
                    squ = 7;
                    break;
                }
            } else if (a == 6 + c || a == 7 + c || a == 8 + c || a == 15 + c || a == 16 + c || a == 17 + c || a == 24 + c || a == 25 + c || a == 26 + c) {
                if (c == 0) {
                    squ = 2;
                    break;
                } else if (c == 27) {
                    squ = 5;
                    break;
                } else if (c == 54) {
                    squ = 8;
                    break;
                }
            }
        }
    }
    bool n[10] = { true,true,true,true,true,true,true,true,true,true };
    bool qui = false;
    int row;
    int col;
    int squ;
};

