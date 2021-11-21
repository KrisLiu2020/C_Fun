//
// Created by PINGHUA LIU on 2021-11-21.
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
    link->data = data;
    link->next = next;
    return link;
}

void printLinkedList(Link head) {
    if (head == NULL) {
        printf("\n");
        return;
    }
    printf("%d", head->data);
    if (head->next) {
        printf("->");
    }
    printLinkedList(head->next);
}

//void pushWrong(Link head, int data) {
//    Link newHead = createNodeWithNext(data, head);
//    head = newHead;  //since only a copy of head value is passed in, this change is only within the func scope
//}

void push(Link *head, int data) {  //ptr to a ptr
    Link newHead = createNodeWithNext(data, *head); // refer to swapping two func ptrs
    *head = newHead;
}

int main() {
    Link node3 = createNode(10);
    Link node2 = createNodeWithNext(20, node3);
    Link node1 = createNodeWithNext(4, node2);
    printLinkedList(node1);
    push(&node1, 5);  //pass in the address of node1
    printLinkedList(node1);

    return 0;
}