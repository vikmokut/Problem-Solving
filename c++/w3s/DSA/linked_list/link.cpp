#include "link.h"
#include <iostream>

// creates a new node with a null next address
Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode) {
		std::cout << "Memory allocation Failed!\n";
		exit(1);
	}

	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

// prints linked list
void printList(Node* node) {
	while(node) {
		std::cout << node->data << ", ";
		node = node->next;
	}
	putchar('\n');
}
