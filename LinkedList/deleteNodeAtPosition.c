//
// Created by PINGHUA LIU on 2021-11-22.
//

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node* Link;

Link createNode(int data) {
   Link link = (Link)malloc(sizeof(struct Node));
   if(link == NULL) {
       perror("Link memory allocation failure");
       exit(1);
   }
   link->data = data;
   link->next = NULL;
   return link;
}

Link createNodeWithNext(int data, Link next) {
    Link link = createNode(data);
    link->next = next;
    return link;
}

void push(Link *head, int data) {
    Link newNode = createNodeWithNext(data, *head);
    *head = newNode;
}

void printLinkedListRecursively(Link head) {
    if(head == NULL) {
        printf("\n");
        return;
    }
    printf("%d", head->data);
    if(head->next) {
        printf("->");
    }
    printLinkedListRecursively(head->next);
}

int getLinkedListLength(Link head) {
    Link cur = head;
    int length = 0;
    while(cur) {
        length++;
        cur = cur->next;
    }
    return length;
}

void moveLinkedListPtr(Link *head, int position) {
    Link cur = *head;
    for(int i=0; i < position; i++) {
        cur = cur->next;
    }
}

int deleteHeadNode(Link *head) {
    Link oldHead = *head;
    int data = oldHead->data;
    *head = oldHead->next;
    free(oldHead);
    return data;
}

int deleteTailNode(Link *head, int position) {
    Link cur = *head;
    for(int i=0; i < position - 2; i++) {
        cur = cur->next;
    }
    int data = cur->next->data;
    Link removedNode = cur->next;
    cur->next = NULL;
    free(removedNode);
    return data;
}

int deleteMiddleNode(Link *head, int position) {
    Link cur = *head;
    moveLinkedListPtr(&cur, position);
    int data = cur->next->data;
    Link removedNode = cur->next;
    cur->next = cur->next->next;
    free(removedNode);
    return data;
}

int deleteNodeAtPosition(Link *head, int position) {
    int listLength = getLinkedListLength(*head);
    if (position == 0) {
        return deleteHeadNode(head);
    }
    if (position < listLength) {
        if (position == listLength - 1) {
            return deleteTailNode(head, listLength);
        }
        return deleteMiddleNode(head, position);
    }
    perror("Index is greater than list length");
    exit(2);
}

int main(){
    Link head = NULL;
    Link nullHead = NULL;
    push(&head, 89);
    push(&head, 10);
    push(&head, 20);
    push(&head, 4);
    push(&head, 5);
    printf("original LinkedList: \n");
    printLinkedListRecursively(head);
    printf("\n");

////    test case1: delete head node, position 0
//    int deleted = deleteNodeAtPosition(&head, 0);
//    printf("%d\n", deleted);
//    printLinkedListRecursively(head);

////    test case2: delete middle node, position < listLength
//    int deleted = deleteNodeAtPosition(&head, 2);
//    printf("%d\n", deleted);
//    printLinkedListRecursively(head);

////    test case3: delete tail node, position == listLength - 1
//    int deleted = deleteNodeAtPosition(&head, 4);
//    printf("%d\n", deleted);
//    printLinkedListRecursively(head);

////    test case4: delete a node out of index, position 6 > length 6
//    int deleted = deleteNodeAtPosition(&head, 6);
//    printf("%d\n", deleted);
//    printLinkedListRecursively(head);

////    test case5: delete a node from empty list
//    int deleted = deleteNodeAtPosition(&nullHead, 6);
//    printf("%d\n", deleted);
//    printLinkedListRecursively(head);

    return 0;
}