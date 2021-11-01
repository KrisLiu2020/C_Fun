//
// Created by PINGHUA LIU on 2021-11-01.
//

#include <stdio.h>

//attention here
#define MASK_TO_TURN_ON_SECOND_AND_THIRD_BIT (0b110)
#define MASK_TO_TURN_OFF_FOURTH_BIT (~0b1000)

int turnOnSecondAndThird(int n) {
    int mask = MASK_TO_TURN_ON_SECOND_AND_THIRD_BIT;
    return mask | n;
}

int turnOffFourth(int n) {
    int mask = MASK_TO_TURN_OFF_FOURTH_BIT;
    return mask & n;
}

int bitFun(int n) {
    int res = turnOnSecondAndThird(n);
    int finalRes = turnOffFourth(res);
    return finalRes;
}

void runTest(int n) {
    printf("n = %d, result: %d\n", n, bitFun(n));
}

int main() {
    runTest(9);
    runTest(0);
    runTest(17);
    runTest(31);
    return 0;
}