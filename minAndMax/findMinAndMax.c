//
// Created by PINGHUA LIU on 2021-10-25.
//

//#include <stdio.h>
//
//void findMinAndMax(int *array, int size, int *min, int *max) {
//    if (size < 2) {
//        perror("Size needs to be at least 2");
//        return;
//    }
//    // when size >= 2: initialize min and max
//    if (array[0] < array [1]) {
//        *min = array[0];
//        *max = array[1];
//    } else {
//        *max = array[0];
//        *min = array[1];
//    }
//    for (int index = 2; index < size; index++) {
//        if (array[index] < *min) {
//            *min = array[index];
//        }
//        if (array[index] > *max) {
//            *max = array[index];
//        }
//    }
//}
//
//int main() {
//    int min;
//    int max;
//    int array[] = {-3, -1, -9, -11, -5, -100, -22};
//    findMinAndMax(array, 7, &min, &max);
//    printf("%d\n", min);
//    printf("%d\n", max);
//}