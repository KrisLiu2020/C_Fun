//
// Created by PINGHUA LIU on 2021-11-14.
//

//#include <stdio.h>
//#include <stdlib.h>
//
//int *integerFun(int *input, int size) {
//    int resultSize = 0;
//    for (int t = 0; t < size; t++) {
//        resultSize += input[t];
//    }
//    int *result = (int *) malloc(resultSize * sizeof(int));
//    if(result == NULL) {
//        perror("Result memory allocation failed");
//        exit(1);
//    }
//    int indexCounter = 0;
//    for (int i = 0; i < size; i++) {
//        int times = input[i];
//        for (int j = 0; j < times; j++) {
//            result[indexCounter] = input[i];
//            indexCounter++;
//        }
//    }
//    return result;
//}
//
//int main() {
//    int testArray[] = {1, 2, 3};
//    int *resultArray = integerFun(testArray, 3);
//    //↓ Important: save the beginning of the resultArray for later mm free before manipulation
//    int *beginning = resultArray;
//    while (*resultArray) {
//        printf("%d\n", *resultArray);
//        resultArray++;
//    }
//    free(beginning);
//    return 0;
//}