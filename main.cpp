#include <iostream>
#include <fstream>
#include "linkedlist.h"
#include "game.h"

int main() {
    LinkedList wordBank;
    std::ifstream wordBankFile("wordbank.txt"); // import words from the text file
    std::string word;
    while (std::getline(wordBankFile, word)) {
        wordBank.addNode(word);
    }
    wordBankFile.close();

	// the main menu of the game/
    int choice;
    while (true) {
        std::cout << "=== Welcome to Alphabet Adventure ===" << std::endl; 
        std::cout << std::endl;
        std::cout << "In this game, you will try to guess a random word by entering a letter." << std::endl;
        std::cout << "Guess carefully as you only have a fixed amount of guesses!" << std::endl;
        std::cout << std::endl;
        std::cout << "Select your choice:" << std::endl;
        std::cout << "1. Play Game" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string wordToGuess = wordBank.getRandomWord();
                Game game(wordToGuess);
                game.play();
                break;
            }
            case 2:
                std::cout << "Exiting the game. Goodbye!" << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }

        std::cout << std::endl;
    }

    return 0;
}







