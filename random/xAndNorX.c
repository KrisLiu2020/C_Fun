//
// Created by PINGHUA LIU on 2021-10-31.
//

#include <stdio.h>

// notes:
// OS uses Two's comp
// e.g. 5 => 0101
// all bits flipped(one's comp) => 1010 => -6
// -6 + 5 = -1
// always -1
// Therefore, when convert a positive 2's comp number to it's negative 2's comp, flip all bits, and then + 1 to balance
//int main() {
//    int num = -9;
//    int num2 = ~num;
//    printf("%d\n", num + num2);
//    return 0;
//}


