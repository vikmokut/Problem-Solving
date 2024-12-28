#include <iostream>
#include "link.h"

int main() {
	// creates new nodes which returns a pointer
	// next members are all NULL at this point
	Node* node1 = createNode(25);
	Node* node2 = createNode(50);
	Node* node3 = createNode(75);
	Node* node4 = createNode(100);

	// defines next to reference the address of succeeding node
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;

	// frees the allocated memory on program end
	free(node1);
	free(node2);
	free(node3);
	free(node4);

	return 0;

}

