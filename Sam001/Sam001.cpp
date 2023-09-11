//
// Created by wertex on 11.09.2023.
//

#include "Sam001.h"

void t1() {
    int v16 = 0x6D3B;
    int mask = 0xAAAA;
    v16 |= mask;
    cout << hex << v16 << dec << endl;
}

void t2() {
    int v16;
    cin >> hex >> v16 >> dec;
    int mask = 0xD7DF;
    v16 &= mask;
    cout << hex << v16 << dec << endl;
}

void t3() {
    int v10;
    int multiplier = 8;
    cin >> v10;
    cout << (v10 << multiplier) << endl;
}

void t4() {
    int v10;
    int divider = 16;
    cin >> v10;
    cout << (v10 >> divider) << endl;
}

void t5() {
    int v16;
    int quartets = 2;
    int mask = 1;
    int n = 3;
    cin >> hex >> v16 >> dec;

    mask <<= 4 * quartets - n;
    mask = ~mask;

    cout << hex << (v16 & mask) << dec << endl;
}