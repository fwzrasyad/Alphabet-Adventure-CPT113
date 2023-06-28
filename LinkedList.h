#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>

class Node {
public:
    std::string word; // Word stored in the node
    Node* next; // Pointer to the next node in the linked list

    Node(std::string word); // Constructor for the Node class
};

class LinkedList {
private:
    Node* head; // Pointer to the head (first node) of the linked list

public:
    LinkedList(); // Constructor for the LinkedList class
    void addNode(std::string word); // Adds a new node to the end of the linked list
    std::string getRandomWord(); // Retrieves a random word from the linked list
};

#endif
