#include "easy.h"
#include <iostream>
using namespace std;

int itc_sqrt(int num) {
    for (int i = 0; i * i <= num; ++i)
        if (i * i == num) {
            return i;
        }
    return -1;
}

double itc_pow(int num, int step) {
    int res = 1;
    for (int i = 0; i < step; i++) {
        res *= num;
    }
    return res;
}

int itc_abs(int num) {
    if (num < 0) {
        return num * (-1);
    }
    else {
        return num;
    }
}

double itc_fabs(double num) {
    if (num < 0) {
        return num * (-1);
    }
    else {
        return num;
    }
}

int itc_revnbr(int num) {
    return (num % 10) * 100 + (num / 10 % 10) * 10 + num / 100;
}