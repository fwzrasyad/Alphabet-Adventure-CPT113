#ifndef GAME_H
#define GAME_H

#include <string>

class Game {
private:
    std::string wordToGuess; // The word to be guessed by the player
    std::string guessedWord; // The word with guessed letters revealed and others hidden
    std::string guessedLetters; // Letters guessed by the player
    int maxGuesses; // Maximum number of guesses allowed
    int guesses; // Number of guesses made

public:
    Game(std::string word); // Constructor for the Game class, initializes game state with the provided word
    void play(); // Main game loop, controls the gameplay
};

#endif



