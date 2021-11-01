//
// Created by PINGHUA LIU on 2021-11-01.
//

//#include <stdio.h>
//
//void swap(int *firstNum, int *secondNum) {
//    int temp = *firstNum;
//    *firstNum = *secondNum;
//    *secondNum = temp;
//}
//
//void reverseArray(int *array, size_t size) {
//    if (size < 2) {
//        return;
//    }
//    swap(array, array + size - 1);
//    reverseArray(array + 1, size - 2);
//}
//
//int main() {
//    int array[] = {1, 2, 3, 4};
//    reverseArray(array, 4);
//    for (int i = 0; i < 4; i++) {
//        printf("%d\n", array[i]);
//    }
//    return 0;
//}