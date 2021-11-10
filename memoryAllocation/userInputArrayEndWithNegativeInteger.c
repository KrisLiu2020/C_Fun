//
// Created by PINGHUA LIU on 2021-11-08.
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define INITIAL_SIZE 1
//
//int *resizeIfNeeded(int *array, int usedLength, int *arraySize) {
//    if(usedLength <= *arraySize) {
//        return array;
//    }
//    printf("Oops, need to reallocate!\n");
//    *arraySize *= 2;
//    array = (int *)realloc(array, *arraySize * sizeof(int));
//    if (array == NULL) {
//        perror("Memory allocation failed");
//        exit(1);
//    }
//    return array;
//}
//
//void readNumFromInputAndStore() {
//    int num;
//    int length;
//    int size = INITIAL_SIZE;
//    int *array = (int *)malloc(size * sizeof(int));
//    scanf("%d", &num);
//    while (num > 0) {
//        length++;
//        array = resizeIfNeeded(array, length, &size);  //To permanently update the value stored in size, use &size
//        array[length - 1] = num;
//        scanf("%d", &num);
//    }
//    for (int i = 0; i < length; i++) {
//        printf("A[%d] = %d\n", i, array[i]);
//    }
//}
//
//int main() {
//    readNumFromInputAndStore();
//    return 0;
//}
