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
//void printLinkedList(Link head) {
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
//
//void printLinkedListRecursively(Link head) {
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
//void push(Link *head, int data) {  //ptr to a ptr
//    Link newHead = createNodeWithNext(data, *head); // refer to swapping two func ptrs
//    *head = newHead;
//}
//
//int removeLastNode(Link *head) {
//    if (!*head) {
//        perror("LinkedList is empty");
//        exit(1);
//    }
//    Link cur = *head;
//
//    if(!cur->next) {
//        *head = NULL;
//        int data = cur->data;
//        free(cur);
//        return data;
//    }
//
//    // 5->4->2->18->89->NULL
//    while (cur->next->next) {
//        cur = cur->next;  //18
//    }
//    Link oldTail = cur->next;
//    int data = oldTail->data;
//    free(oldTail);
//    cur->next = NULL;
//    return data;
//}
//
//int pop(Link *head) {
//    if(!*head) {
//        perror("LinkedList is empty");
//        exit(2);
//    }
//    int poppedData = (*head)->data;
//    Link oldHead = *head;
//    *head = (*head)->next;
//    free(oldHead);
//    return poppedData;
//}
//
//int main() {
//    // ↓ But push is even more efficient (no need to traverse everytime)
//    Link anotherHead = NULL;
//    // Each time push is called, anotherHead's value(address of the node) is permanently updated with the new headNode
//    push(&anotherHead, 89);
//    push(&anotherHead, 10);
//    push(&anotherHead, 20);
//    push(&anotherHead, 4);
//    push(&anotherHead, 5);
//    printLinkedList(anotherHead);
//
//    int removedData = removeLastNode(&anotherHead);
//    printLinkedList(anotherHead);
//    printf("Removed node data: %d\n", removedData);
//
//    int poppedData = pop(&anotherHead);
//    printLinkedList(anotherHead);
//    printf("Popped node data: %d\n", poppedData);
//    return 0;
//}