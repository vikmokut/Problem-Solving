#include <iostream>

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
    while(node) {
        std::cout << node->data << ", ";
        node = node->next;
    }
    putchar('\n');
}

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
    
    printList(node1);
    node3->data = 20; // changes data at node
    printListReverse(node4); // prints in reverse from the current node.
    
    // traverses through the linked list for manipulation - count/search/find etc.
    int count = 0;
    Node* node = node1;
    while(node) { // terminates at node->next = NULL
        if (node->data == 20)
            count++;
        node = node->next; // necessary for traversal
    }
    std::cout << "There are " << count << " count(s) of the value\n";
    
    // always free allocated memory to avoid leaks
    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return 0;
}
