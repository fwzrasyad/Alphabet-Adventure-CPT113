#include "linkedlist.h"
#include <cstdlib>
#include <ctime>

Node::Node(std::string word) {
    // Constructor for Node class
    // Initializes a node with the provided word and sets the next pointer to nullptr
    this->word = word;
    this->next = nullptr;
}

LinkedList::LinkedList() {
    // Constructor for LinkedList class
    // Initializes the head pointer to nullptr, indicating an empty linked list
    this->head = nullptr;
}

void LinkedList::addNode(std::string word) {
    // Adds a new node containing the provided word to the end of the linked list

    // Create a new node with the provided word
    Node* newNode = new Node(word);

    if (head == nullptr) {
        // If the linked list is empty, set the head to the new node
        head = newNode;
    } else {
        // Traverse to the last node in the linked list
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        // Append the new node to the end of the linked list
        temp->next = newNode;
    }
}

std::string LinkedList::getRandomWord() {
    // Retrieves a random word from the linked list

    if (head == nullptr) {
        // If the linked list is empty, return an empty string
        return "";
    }

    std::string randomWord;
    int listSize = 0;

    // Count the number of nodes in the linked list
    Node* temp = head;
    while (temp != nullptr) {
        listSize++;
        temp = temp->next;
    }

    // Generate a random index within the size of the linked list
    srand(time(0));
    int randomIndex = rand() % listSize;

    // Traverse to the randomly selected node
    temp = head;
    for (int i = 0; i < randomIndex; i++) {
        temp = temp->next;
    }

    // Retrieve the word stored in the selected node
    randomWord = temp->word;

    // Return the randomly selected word
    return randomWord;
}





