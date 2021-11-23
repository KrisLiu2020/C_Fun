//
// Created by PINGHUA LIU on 2021-11-22.
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//struct Node {
//    float data;
//    struct Node *next;
//};
//
//typedef struct Node * Link;
//
//Link createNode(float data) {
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
//Link createNodeWithNext(float data, Link next) {
//    Link link = createNode(data);
//    link->next = next;
//    return link;
//}
//
//void push(Link *head, float data) {
//    Link newNode = createNodeWithNext(data, *head);
//    *head = newNode;
//}
//
//bool isValid(float data) {
//    return (data > 1.0f);
//}
//
//void pop(Link *head) {
//    if(!*head) {
//        perror("LinkedList is empty");
//        exit(2);
//    }
//    Link oldHead = *head;
//    *head = (*head)->next;
//    free(oldHead);
//}
//
//void filter(Link *head, bool (*isValid)(float)) {
//    if (!*head) {
//        return;
//    }
//    while (*head) {
//        if (!(isValid((*head)->data))) {
//            pop(head);
//        } else {
//            head = &((*head)->next);  //update ptr to ptr here
//        }
//    }
//}
//
//void filterRecursively(Link *head, bool (*isValid)(float)) {
//    if(!*head) {
//        return;
//    }
//    if(!isValid((*head)->data)) {
//        pop(head);
//        filterRecursively(head, isValid);
//        return;
//    }
//    filterRecursively(&((*head)->next), isValid);
//}
//
//void printLinkedList(Link head) {
//    if(head == NULL) {
//        printf("NULL");
//    }
//    struct Node *cur = head;
//    while(cur != NULL) {
//        printf("%f", cur->data);
//        cur = cur->next;
//        if(cur != NULL) {
//            printf(" -> ");
//        } else {
//            printf(" -> NULL");
//        }
//    }
//    printf("\n");
//}
//
//int main(){
//    Link head = NULL;
//    push(&head, 3.00f);
//    push(&head, -5.00f);
//    push(&head, 7.00f);
//    push(&head, -3.00f);
//    push(&head, 0.00f);
//    printLinkedList(head);
//
//    // test case1: iteration
//    filter(&head, isValid);
//    printLinkedList(head);
//
//    // test case2: recursion
//    filterRecursively(&head, isValid);
//    printLinkedList(head);
//
//    return 0;
//}