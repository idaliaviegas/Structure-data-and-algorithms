#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

void insertAfter(Node* prevNode, int data) {
    if (prevNode == NULL) {
        cout << "Previous node cannot be NULL" << endl;
        return;
    }
    Node* newNode = new Node(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(4);
    cout << "Original linked list: ";
    printList(head);
    Node* prevNode = head->next;
    insertAfter(prevNode, 3);
    cout << "Linked list after inserting 3 after 2: ";
    printList(head);
    return 0;
}

