## Hackatahon 2 CPT 113 - Alphabet Adventure ##
Made By: 
- Muhammad Fawwaz Rasyad (160642)
- Siti Nur Irdina Binti Turse Zuhair (163854)
- Jasmine Binti Mohd Shaiful Adli Chung (164191)

## Game Description ##
Alphabet Adventure is a text based game developed in C++ where the player tries to guess a given word by entering a letter that is in the word itself. The player has to carefully pick their letters though as they only have a fixed amount of guesses before it is game over!

## Features of Alphabet Adventure ##
- Main Menu: The game starts with a main menu where the player can choose between a number of options.
- Word Bank: The game has a word bank stored in a seperate text file, which is a collection of words that is used in the game.
- Random Word Selection: A random word from the word bank will be selected randomly which adds variety and challenge to the game.
- Guessing Mechanism: The game keeps tracks of the guessed letters and updates the guessed word accordingly, and also sets a maximum number of guesses for each word. If the player exceeds the limit, they lose the game.
- Feedback and Progress: The game provides feedback by displaying the guessed word with revealed letters and underscores for hidden letters and it shows the guessed letters and the number of remaining guesses.
- Win/Loss Conditions: The game checks the win condition to determine if the player has guessed the entire word or not, and if the player loses all their guesses without guessing the word correctly, they lose the game.

## Object-Oriented Concepts to Develop Alphabet Adventure ##
Object-oriented programming ideas have been used in our game code to improve its organisation and structure our programme. Let's analyse how these ideas were implemented utilising instances from our code:

1. Classes and Objects:
We have created several classes to represent the various components of the game. For managing the word bank, the 'LinkedList' class, for instance, represents a linked list data structure. The 'Node' class, which is used to describe nodes, is used to store each word in the word bank. The `Game` class also encapsulates the game's logic and state, including the word to guess, guessed letters, and remaining guesses.

2. Encapsulation:
Each class encapsulates its own data and behaviour within its respective methods to ensure encapsulation, clearly separating concerns. For instance, the `LinkedList` class encapsulates the functionality to add words to the linked list (`addNode`) and retrieve a random word from the list (`getRandomWord`). Similarly, the `Game` class encapsulates the game-related operations within the `play` method.

3. Constructors:
We've implemented constructors for our classes to give the objects the necessary initial state. For example, the 'Game' constructor accepts the word to guess and sets the word, initialises the guess with underscores, and sets the number of guesses left.

4. Member Functions:
Each class provides member functions that define their behaviour and operations. For instance, the `LinkedList` class offers the `addNode` function, which adds words to the linked list, and the `getRandomWord` function, which retrieves a random word from the list. Similarly, the `Game` class includes the `play` method, which controls the main gameplay loop and handles user input and game logic.

5. Object Composition:
We have used object composition by incorporating the 'LinkedList' class within the 'Game' class. With the help of this composition, the game can access the word bank and retrieve random words for use in gameplay using the 'getRandomWord' function.


6. Data Hiding:
To guarantee data integrity and encapsulation, we have designated the data members of our classes as private. For instance, the private members 'wordToGuess', 'guessedWord', and 'guessedLetters' in the 'Game' class are only reachable through member functions. This protects the data from direct modification and provides restricted access to it.

These object-oriented ideas enable us to make our code more modular, structured, and manageable. It encourages code reuse, improves readability, and makes building and implementing our programme systematically and scalability possible.

## Role of Linked List in Alphabet Adventure ##

- The linked list data structure is used to store and manage a collection of words in Alphabet Adventure.
- The `LinkedList` class, defined in `LinkedList.h` and implemented in `LinkedList.cpp`, represents the linked list.
- The linked list is initialized by creating an instance of the `LinkedList` class, called `wordBank`.
- The `wordBank` serves as a repository of words that can be randomly selected for the game.
- Words are added to the linked list using the `addNode()` function, which creates a new node with the word and appends it to the end of the list.
- The `getRandomWord()` function allows the user to retrieve a random word from the linked list. It traverses the list, counts the number of nodes, generates a random index, and selects the word at that index.
- The `getRandomWord()` function can be used in your game to select a random word for the player to guess, ensuring a different word is chosen each time.

## Screenshots of Alphabet Adventure ##


![image](https://github.com/fwzrasyad/Alphabet-Adventure-CPT113/assets/121543815/0fdc975a-82d4-480d-8c22-657a1e3dea9f)
