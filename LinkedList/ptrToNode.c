//
// Created by PINGHUA LIU on 2021-11-21.
//

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node {
//    int data;
//    struct Node *next;
//};
//
//typedef struct Node* Link;
//
//Link createNode(int data) {
//   Link link = (Link)malloc(sizeof(struct Node));
//   if(link == NULL) {
//       perror("Link memory allocation failure");
//       exit(1);
//   }
//   link->data = data;
//   link->next = NULL;
//   return link;
//}
//
//Link createNodeWithNext(int data, Link next) {
//    Link link = createNode(data);
//    link->data = data;
//    link->next = next;
//    return link;
//}
//
//void printLinkedList(Link head) {
//    if (head == NULL) {
//        printf("\n");
//        return;
//    }
//    printf("%d", head->data);
//    if (head->next) {
//        printf("->");
//    }
//    printLinkedList(head->next);
//}
//
//int calculateLinkedListLength(Link head) {
//    int counter = 0;
//    Link cur = head;
//    while (cur) {
//        cur = cur->next;
//        counter++;
//    }
//    return counter;
//}
//
//int calculateLinkedListLengthRecursively(Link head) {
//    if(head == NULL) {
//        return 0;
//    }
//    return 1 + calculateLinkedListLengthRecursively(head->next);
//}
//
//int main() {
//    Link node3 = createNode(10);
//    Link node2 = createNodeWithNext(20, node3);
//    Link node1 = createNodeWithNext(4, node2);
//    printLinkedList(node1);
//    printf("LinkedList length: %d\n", calculateLinkedListLength(node1));
//    printf("LinkedList length(recursion): %d\n", calculateLinkedListLengthRecursively(node1));
//
//    return 0;
//}