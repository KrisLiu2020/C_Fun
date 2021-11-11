//
// Created by PINGHUA LIU on 2021-11-10.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void modifyInput(char *original, char *array){
    while (*original) {
        if (*original == ' ') {
            original++;
        } else if (*original == '*') {
            *array = *original;
            array++;
            *array = *original;
            array++;
            original++;
        } else if ( 'a' <= *original && *original <= 'z') {
            *original -= 32;
            *array = *original;
            original++;
            array++;
        } else {
            *array = *original;
            original++;
            array++;
        }
    }
}

int calculateMemory(char *input) {
    int size = strlen(input) + 1;
    while(*input) {
        if(*input == '*') {
            size++;
        }
        input++;
    }
    return size;
}

char *processFile(char *input) {
    int length = calculateMemory(input);
    char* array = (char *)malloc(length * sizeof(char));
    if(array == NULL) {
        perror("Memory allocation failed");
        exit(1);
    }
    modifyInput(input, array);
    return array;
}

int main(int argc, char *argv[]) {  //run -> edit config -> "Kris*kris"
    if (argc < 2) {
        perror("Missing string input");
        exit(1);
    }
    char* result = processFile(argv[1]);
    printf("%s\n", result);
    free(result);
    return 0;
}