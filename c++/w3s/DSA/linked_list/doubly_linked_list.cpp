#include <iostream>

// define a struct type for doubly linked list
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        std::cout << "Memory allocation unsuccessfull\n";
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// prints list from head node
void printList(Node* node) {
    while(node) {
        std::cout << node->data << ", ";
        node = node->next;
    }
    putchar('\n');
}

// prints list from tail node in reverse order
void printListReverse(Node* node) {
    while(node) {
        std::cout << node->data << ", ";
        node = node->prev;
    }
    putchar('\n');
}

int main() {
    Node* node1 = createNode(5);
    Node* node2 = createNode(10);
    Node* node3 = createNode(15);
    Node* node4 = createNode(20);
    
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    
    node4->prev = node3;
    node3->prev = node2;
    node2->prev = node1;
    
    // using the singly linked
    printList(node1);
    // prints in reverse from the tail node.
    // using the doubly linked list
    printListReverse(node4);
    
    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return 0;
}
