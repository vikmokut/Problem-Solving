#include <iostream>

// defines a type for singly linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// creates a new node with ptr to null
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        std::cout << "Memory allocation unsuccessfull\n";
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// traverses and outputs linked list
void printList(Node* node) {
    while(node) {
        std::cout << node->data << ", ";
        node = node->next;
    }
    putchar('\n');
}

int main() {
    // since createNode returns a pointer, nodes are declared with type Node pointer
    Node* node1 = createNode(5);
    Node* node2 = createNode(10);
    Node* node3 = createNode(15);
    Node* node4 = createNode(20);
    
    // createNode sets the next struct member to NULL, this reassigns it
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    
    printList(node1);
    
    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return 0;
}
