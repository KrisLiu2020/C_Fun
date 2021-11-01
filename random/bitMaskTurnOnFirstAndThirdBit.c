//
// Created by PINGHUA LIU on 2021-10-31.
//

#include <stdio.h>

int turnOnFirstAndThirdBit(int n) {
    int mask = 5;
    return mask | n;
}

void runTurnOnFirstAndThirdBitTest(int n) {
    printf("n = %d, resultAfterFirstAndThirdBitTurnedOn: %d\n", n, turnOnFirstAndThirdBit(n));
}

int main() {
    runTurnOnFirstAndThirdBitTest(8);
    runTurnOnFirstAndThirdBitTest(0);
    runTurnOnFirstAndThirdBitTest(17);
    runTurnOnFirstAndThirdBitTest(29);
    return 0;
}

