#include <iostream>

// structure for circular doubly linked list
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

void printList(Node* node) {
    Node* startNode = node; // checks for the head node
    do {
        std::cout << node->data << ", ";
        node = node->next;
    } while (node != startNode);
    putchar('\n');
}

void printListReverse(Node* node) {
    Node* startNode = node; // checks for the tail node
    do {
        std::cout << node->data << ", ";
        node = node->prev;
    } while (node != startNode);
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
    node4->next = node1; // creates the circular link forward
    
    node4->prev = node3;
    node3->prev = node2;
    node2->prev = node1;
    node1->prev = node4; // create the circular link backwards
    
    printList(node1);
    printListReverse(node4); // prints in reverse from the current node.
    
    // always free allocated memory to avoid leaks
    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return 0;
}
