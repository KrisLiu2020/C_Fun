//
// Created by PINGHUA LIU on 2021-11-14.
//

//#include <stdio.h>
//#include <stdlib.h>
//
//void checkForEmptyArray(int sizeOfArray) {
//    if (sizeOfArray == 0) {
//        perror("Empty array not allowed");
//        exit(2);
//    }
//}
//
//int *subtractArray(int *firstArray, int *secondArray, int size) {
//    checkForEmptyArray(size);
//    int *result = (int *)malloc(size * sizeof(int));
//    if(result == NULL) {
//        perror("Result array memory allocation failed");
//        exit(1);
//    }
//    for(int i = 0; i < size; i++) {
//        result[i] = firstArray[i] - secondArray[i];
//    }
//    return result;
//}
//
//int main() {
//    int firstArray[] = {1, 2, 3, 4, 5};
//    int secondArray[] = {4, 3, 2, 1, 5};
//    int *result = subtractArray(firstArray, secondArray, 5);
//    for(int i = 0; i < 5; i++) {
//        printf("%d\n", result[i]);
//    }
//    free(result);
//    return 0;
//}