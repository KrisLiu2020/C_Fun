//
// Created by PINGHUA LIU on 2021-10-25.
//

//#include <stdio.h>
//
//void swap(int *firstNum, int *secondNum) {
//    int temp = *firstNum;
//    *firstNum = *secondNum;
//    *secondNum = temp;
//}
//
//void reverseArray(int *array, int size) {
//    for (int forward = 0, backward = size - 1; forward < backward; forward++, backward--) {
//        swap(array + forward, array + backward);
//    }
//}
//
//int nonRecursiveToBinary(int number, int *binaryArray) {
//    int idx = 0;
//    while (number > 0) {
//        binaryArray[idx] = number % 2;
//        number /= 2;
//        idx++;
//    }
//    reverseArray(binaryArray, idx);
//    return idx;
//}
//
//int main() {
//    int binaryArray[10];
//    printf("%d", nonRecursiveToBinary(7, binaryArray));
//}