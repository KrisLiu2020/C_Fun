//
// Created by PINGHUA LIU on 2021-11-15.
//

//#include <stdio.h>
//
//// can return bool as well
//int compare(void *first, void *second) {
//    if (*(int *)first > *(int *)second) {
//        return 0;
//    }
//    return 1;
//}
//
//void *findMaxOutOfTwo(void *first, void *second) {
//    if (compare(first, second) == 0) {
//        return first;
//    }
//    return second;
//}
//
//int main() {
//    int firstInt = 5;
//    int secondInt = 8;
//    int *resultInt = (int *)findMaxOutOfTwo(&firstInt, &secondInt);
//    printf("Max index: %d\n", *resultInt);
//
//    float firstFloat = 8.0f;
//    float secondFloat = 5.0f;
//    float *resultFloat = (float *)findMaxOutOfTwo(&firstFloat, &secondFloat);
//    printf("Max index: %f\n", *resultFloat);
//
//    return 0;
//}