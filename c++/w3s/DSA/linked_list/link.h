#ifndef LINK_H
#define LINK_H

// defines a linked list, and its members
typedef struct Node {
	int data;
	struct Node* next;
} Node;

// creates a new node
Node* createNode(int);

// prints existing nodes
void printList(Node*);

#endif
