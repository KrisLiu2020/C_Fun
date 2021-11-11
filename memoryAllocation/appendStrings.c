//
// Created by PINGHUA LIU on 2021-11-09.
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char *append(char *data[], int count) {
//    int length = 0;
//    for(int i = 0; i < count; i++) {
//        length += strlen(data[i]);
//    }
//    int *array = malloc(length * sizeof(char) + 1);
//    if (array == NULL) {
//        perror("Memory allocation failed");
//        exit(1);
//    }
//    strcpy(array, ""); // initialize the mm with empty string
//    for(int i = 0; i < count; i++) {
//        strcat(array, data[i]);
//    }
//    return array;
//}
//
//int main() {
//    char *data[] = {"Hello", "world", "work", "hard"};
//    char *result = append(data, 4);
//    printf("%s\n", result);
//    free((result);
//    return 0;
//}
