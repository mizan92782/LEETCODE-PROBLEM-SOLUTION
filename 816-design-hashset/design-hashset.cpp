#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}  // Constructor for Node
};

class MyHashSet {

    Node* node = nullptr;  // Head of the linked list

public:
    MyHashSet() {
        // Initialize an empty set (linked list)
    }

    // Add a new key to the set
    void add(int key) {
        // Check if the key is already present
        if (contains(key)) return;

        // If list is empty, create the first node
        if (node == nullptr) {
            node = new Node(key);
        } else {
            // Traverse to the end of the list and add the new node
            Node* temp = node;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = new Node(key);
        }
    }

    // Remove a key from the set
    void remove(int key) {
        if (node == nullptr) return;

        // Handle deletion of the head node
        if (node->val == key) {
            Node* toDelete = node;
            node = node->next;
            delete toDelete;
            return;
        }

        // Traverse to find and remove the key
        Node* temp = node;
        while (temp->next != nullptr) {
            if (temp->next->val == key) {
                Node* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
                return;
            }
            temp = temp->next;
        }
    }

    // Check if the set contains a key
    bool contains(int key) {
        Node* temp = node;
        while (temp != nullptr) {
            if (temp->val == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
