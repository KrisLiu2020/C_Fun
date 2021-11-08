//
// Created by PINGHUA LIU on 2021-11-08.
//

//#include <stdio.h>
//#include <stdlib.h>
//#define EMPTY_ARRAY_ERROR_EXIT_CODE 1
//
//struct arrayWithSize {
//    int *elements;
//    int size;
//};
//
//int findMaxElement(struct arrayWithSize array) {
//    if(array.size == 0) {
//        perror("Empty array passed in!");
//        exit(EMPTY_ARRAY_ERROR_EXIT_CODE);
//    }
//
//    if(array.size == 1) {
//        return *(array.elements);
//    }
//
//    struct arrayWithSize arrayWithoutFirstElement = {array.elements + 1, array.size - 1};
//    int max = findMaxElement(arrayWithoutFirstElement);
//    return (max > *(array.elements)) ? max : *(array.elements);
//}
//
//int main() {
//    int elements[] = {1, 2, 10, 7, 3};
//    struct arrayWithSize array = {elements, 5};
//    printf("Max = %d\n", findMaxElement(array));
//    return 0;
//}