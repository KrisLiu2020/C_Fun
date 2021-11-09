//
// Created by PINGHUA LIU on 2021-11-08.
//

//#include <stdio.h>
//
//#define max(a, b) (((a) > (b)) ? (a) : (b))
//
//int findMax(int a, int b) {
//    return a > b ? a : b;
//}
//
//int main() {
//    int x = 5;
//    int y = 10;
//
//    printf("better use a function: max = %d\n", findMax(x, y));
//
//    printf("max = %d\n", max(x++, y--));
//    printf("x = %d, y = %d\n", x, y);
//
//    return 0;
//}

// 5++ > 10-- ? 5++ : 10-- ①
// compare 5++ and 10-- is the same as comparing 5 and 10, since ++ is post-increment
// ∵ 5++ > 10-- ? is false
// decrement: 5 + 1 = 6; 10 - 1 = 9;
// 9 returned as max
// decrement: 9 - 1 = 8;
// ∴ x = 6, y = 8;

// post-increment operator: execute expression completely first, then increment