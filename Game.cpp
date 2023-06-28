#include "game.h"
#include <iostream>


Game::Game(std::string word) { 
    wordToGuess = word; // sets the word to guess
    guessedWord = std::string(word.length(), '_'); // Initializes the word with underscores
    guessedLetters = ""; // initialize the guessed letters
    maxGuesses = 15; // sets the max amount of guesses
    guesses = 0; // to keep track of the guesses
}

void Game::play() {
    int remainingGuesses = maxGuesses; // initialize the remaining number of guessed words
    
    while (remainingGuesses > 0 && guessedWord != wordToGuess) {
        std::cout << "Guessed Word: ";
        for (char letter : guessedWord) {
            std::cout << letter << " "; // display the guessed word
        }
        std::cout << std::endl;

        std::cout << "Guessed Letters: " << guessedLetters << std::endl; // displays the guessed letters
        std::cout << "Remaining Guesses: " << remainingGuesses << std::endl; // displays the remaining guesses

        char letter;
        std::cout << "Enter a lowercase letter: ";
        std::cin >> letter;

        // Convert the entered letter to lowercase
        letter = std::tolower(letter);

        // Check if the entered letter is lowercase
        if (!std::islower(letter)) {
            std::cout << "Invalid input. Please enter a lowercase letter." << std::endl;
            continue;
        }

        bool isCorrectGuess = false;
        for (int i = 0; i < wordToGuess.length(); i++) {
            if (wordToGuess[i] == letter) {
                guessedWord[i] = letter; // updates the guessed word with the correctly guessed letter
                isCorrectGuess = true;
            }
        }

        if (!isCorrectGuess) {
            remainingGuesses--; // reduces the remaining guess count
        }

        guessedLetters += letter;

        guessedLetters = " " + guessedLetters + " ";
    }

    if (guessedWord == wordToGuess) {
        std::cout << "Congratulations! You guessed the word: " << wordToGuess << std::endl;
    } else {
        std::cout << "You ran out of guesses. The word was: " << wordToGuess << std::endl;
    }
}








