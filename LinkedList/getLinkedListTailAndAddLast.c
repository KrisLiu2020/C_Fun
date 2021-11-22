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

int calculateLinkedListLengthRecursively(Link head) {
    if(head == NULL) {
        return 0;
    }
    return 1 + calculateLinkedListLengthRecursively(head->next);
}

void push (Link *head, int data) {
    Link newNode = createNodeWithNext(data, *head);
    *head = newNode;
}

Link getTail(Link head) {
    if (head == NULL) {
        return NULL;
    }
    Link cur = head;
    while(cur->next) {
        cur = cur->next;
    }
    return cur;
}

Link getTailRecursively(Link head) {
    if (head == NULL) {
        return NULL;
    }
    if(!head->next) {
        return head;
    }
    return getTailRecursively(head->next);
}

void addLast(Link *head, int data) {
    Link lastNode = createNode(data);
    if(!*head) {
        *head = lastNode;
        return;
    }
    Link oldLastNode = getTail(*head);
    oldLastNode->next = lastNode;
}

int main() {
    Link node3 = createNode(10);
    Link node2 = createNodeWithNext(20, node3);
    Link node1 = createNodeWithNext(4, node2);
    printLinkedList(node1);

    Link tail = getTailRecursively(node1);
    printf("Tail data: %d\n", tail->data);

    addLast(&node1, 89);
    printLinkedList(node1);

    // ↓ Use addLast to create a LinkedList more easily:
    Link head = NULL;
    addLast(&head, 5);
    addLast(&head, 4);
    addLast(&head, 20);
    addLast(&head, 10);
    addLast(&head, 89);
    printLinkedList(head);

    // ↓ But push is even more efficient (no need to traverse everytime)
    Link anotherHead = NULL;
    // Each time push is called, anotherHead's value(address of the node) is permanently updated with the new headNode
    push(&anotherHead, 89);
    push(&anotherHead, 10);
    push(&anotherHead, 20);
    push(&anotherHead, 4);
    push(&anotherHead, 5);
    printLinkedList(anotherHead);

    return 0;
}