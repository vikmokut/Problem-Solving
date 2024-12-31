#include <iostream>

// structure for a linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node node1, node2, node3, node4;
    node1.data = 2;
    node1.next = &node2;
    
    node2.data = 5;
    node2.next = &node3;
    
    node3.data = 1;
    node3.next = &node4;
    
    node4.data = 12;
    node4.next = NULL;
    
    // print linked list
    Node* node = &node1;
    while(node) {
        std::cout << node->data << ", ";
        node = node->next;
    }

    putchar('\n');

    // a note on struct size
    std::cout << sizeof(node1); // int(4) + ptr(8) + paddingFromPtr(4); padding depends on compiler, usually 4 - 8 bytes

    
    return 0;
}
