//
// Created by PINGHUA LIU on 2021-11-21.
//

#include <stdio.h>

//struct Node {
//    int data;
//    struct Node *next;
//};

//void printLinkedList(struct Node *head) {
//    struct Node *cur = head;
//    while(cur != NULL) {
//        printf("%d", cur->data);
//        cur = cur->next;
//        if(cur != NULL) {
//            printf("->");
//        }
//    }
//    printf("\n");
//}

//void printLinkedListRecursively(struct Node *head) {
//    if(head == NULL) {
//        printf("\n");
//        return;
//    }
//    printf("%d", head->data);
//    if(head->next) {
//        printf("->");
//    }
//    printLinkedListRecursively(head->next);
//}

//int main() {
//    // 4 -> 20 -> 10 -> NULL
//    struct Node node3 = {10, NULL};
//    struct Node node2 = {20, &node3};
//    struct Node node1 = {4, &node2};
////    printLinkedList(&node1);
//    printLinkedListRecursively(&node1);
//    return 0;
//}
