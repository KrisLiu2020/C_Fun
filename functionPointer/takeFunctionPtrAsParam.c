//
// Created by PINGHUA LIU on 2021-11-15.
//

#include <stdio.h>

void functionPointer (char* inputString) {
   printf("%s\n", inputString);
}

void runFunctionPointer (char *input, void (*functionPointer)(char *)) {
    functionPointer(input);
}

int main() {
    runFunctionPointer("This is testing function pointer.", functionPointer);
}