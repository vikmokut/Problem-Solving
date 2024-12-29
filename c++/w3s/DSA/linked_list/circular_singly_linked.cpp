#include <iostream>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

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

// traverse singly linked circular list once
void printCircularList(Node* node) {
    Node* startNode = node;
    do {
        std::cout << node->data << ", ";
        node = node->next;
    } while (node != startNode);
    putchar('\n');
}

// traverse circular list x number of times
// uses function overloading
void printCircularList(Node* node, int count) {
    Node* startNode = node;
    std::cout << node->data << ", ";
    node = node->next;
    do {
        if (node == startNode) {
            putchar('\n');
            count--;
        }
        if (count == 0)
            break;
        std::cout << node->data << ", ";
        node = node->next;
    } while (node);
}

int main() {
    Node* node1 = createNode(5);
    Node* node2 = createNode(10);
    Node* node3 = createNode(15);
    Node* node4 = createNode(20);
    
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node1; // circular singly linked list
    
    printCircularList(node1);
    putchar('\n');
    printCircularList(node1, 5);
    
    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return 0;
}
