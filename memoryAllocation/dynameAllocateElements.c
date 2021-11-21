
// Below is the problematic code

//#include <stdio.h>
//#include <stdlib.h>
//
//#define MEMORY_ALLOCATION_ERROR 1
//
//struct NameStruct {
//    char *name;
//};
//
//struct NameStruct *createNameStruct() {
//    char message[] = "This is an easy question";
//    struct NameStruct *newNode = (struct NameStruct*) malloc(sizeof(struct NameStruct));
//    if (!newNode) {
//        perror("Out of memory.");
//        exit(MEMORY_ALLOCATION_ERROR);
//    }
//    // ↓ dangerous behavior, within a struct char *name is still better to be dynamically allocated.
//    // ↓ Use strdup to copy
//    newNode->name = message;
//    return newNode;
//}
//
//void destroy(struct NameStruct *node) {
//    free(node->name);  // pointer being freed was not allocated; name is also supposed to be dynamically allocated
//    free(node);
//}
//
//int main() {
//    struct NameStruct *element = createNameStruct();
//    if (element) {
//        printf("Name : %s\n", element->name);
//        destroy(element);
//    }
//    return 0;
//}

// ===============================================================================================================

/* Below is the fix.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MEMORY_ALLOCATION_ERROR 1

//struct NameStruct {
//    char *name;
//};

/*
 * We must allocate memory for the message as 'char *name' is a pointer to a string
 * and does not have a preset maximum size.
 *
 * Therefore, we need to dynamically allocate memory for the message before storing it
 * into the NameStruct structure by using strdup from the string.h library.
 *
 */
//struct NameStruct *createNameStruct(char *message) {
//    struct NameStruct *newNode = (struct NameStruct*) malloc(sizeof(struct NameStruct));
//    if (!newNode) { // !newNode and 'newNode == NULL' is the same thing
//        perror("Out of memory.");
//        exit(MEMORY_ALLOCATION_ERROR);
//    }
//    newNode->name = strdup(message);
////    newNode->name = message; // Wrong here. Must allocate memory for message
//    return newNode;
//}
//
//void destroy(struct NameStruct *node) {
//    free(node->name);
//    free(node);
//}
//
//int main() {
//    char message[] = "This is an easy question";
//    struct NameStruct *element = createNameStruct(message);
//    if (element) {
//        printf("Name : %s\n", element->name);
//        destroy(element);
//    }
//    return 0;
//}