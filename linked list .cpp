#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Delete a node by value
    void deleteNode(int val) {
        if (head == NULL) return;

        if (head->data == val) {
            Node* del = head;
            head = head->next;
            delete del;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL && temp->next->data != val) {
            temp = temp->next;
        }

        if (temp->next == NULL) return;

        Node* del = temp->next;
        temp->next = temp->next->next;
        delete del;
    }

    // Search a value
    bool search(int val) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }

    // Display list
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtBeginning(5);

    cout << "Linked List: ";
    list.display();

    cout << "Searching 20: " << (list.search(20) ? "Found" : "Not Found") << endl;

    list.deleteNode(10);
    cout << "After deleting 10: ";
    list.display();

    return 0;
}
