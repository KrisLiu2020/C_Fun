//
// Created by PINGHUA LIU on 2021-11-01.
//

//#include <stdio.h>

// assume integers in the range of 0 and 1000
// This is not an ideal solution because it changes the arrays permanently.

//void swap (int *firstNum, int *secondNum) {
//    int temp = *firstNum;
//    *firstNum = *secondNum;
//    *secondNum = temp;
//}
//
//void sortArray(int *intArr, size_t size) {
//    for (int i = 0; i < size; i++) {
//        for (int j = i + 1; j < size; j++) {
//            if (intArr[i] > intArr[j]) {
//                swap(intArr + i, intArr + j);
//            }
//        }
//    }
//}
//
//int compareTwoArrays(int *intArr1, size_t intArr1Size, int *intArr2) {
//    int counter;
//    for (counter = 0; counter < intArr1Size; counter++) {
//        if (intArr1[counter] != intArr2[counter]) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//void checkIfAnagrams(int *intArr1, size_t intArr1Size, int *intArr2, size_t intArr2Size) {
//    if (intArr1Size != intArr2Size) {
//        printf("Result: Not anagrams!");
//        return;
//    }
//    sortArray(intArr1, intArr1Size);
//    sortArray(intArr2, intArr2Size);
//    printf("Result: %d", compareTwoArrays(intArr1, intArr1Size, intArr2));
//}
//
//int main() {
//    int testArr1[] = {1, 1, 2, 2};
//    int testArr2[] = {2, 1, 1, 2};
//    size_t sizeTestArr1 = sizeof(testArr1)/sizeof(testArr1[0]);
//    size_t sizeTestArr2 = sizeof(testArr2)/sizeof(testArr2[0]);
//    sortArray(testArr1, sizeTestArr1);
//    sortArray(testArr2, sizeTestArr2);
//    checkIfAnagrams(testArr1, sizeTestArr1, testArr2, sizeTestArr2);
//    return 0;
//}