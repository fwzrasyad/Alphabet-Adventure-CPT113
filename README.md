## Hackatahon 2 CPT 113 - Alphabet Adventure ##
Made By: 
- Muhammad Fawwaz Rasyad (160642)
- Siti Nur Irdina Binti Turse Zuhair (163854)
- Jasmine Binti Mohd Shaiful Adli Chung (164191)

## Table of Contents ##
- [Game Description](#game-description)
- [Features of Alphabet Adventure](#features-of-alphabet-adventure)
- [How to play](#how-to-play)
- [Object-Oriented Concepts to Develop Alphabet Adventure](#object-oriented-concepts-to-develop-alphabet-adventure)
- [Role of Linked List in Alphabet Adventure](#role-of-linked-list-in-alphabet-adventure)
- [Screenshots of Alphabet Adventure](#screenshots-of-alphabet-adventure)
- [Alphabet Adventure Game Demo and Explanation Video ](#alphabet-adventure-game-demo-and-explanation-video)

## Game Description ##
Alphabet Adventure is a text based game developed in C++ where the player tries to guess a given word by entering a letter that is in the word itself. The player has to carefully pick their letters though as they only have a fixed amount of guesses before it is game over!

## Features of Alphabet Adventure ##
- Main Menu: The game starts with a main menu where the player can choose between a number of options.
- Word Bank: The game has a word bank stored in a seperate text file, which is a collection of words that is used in the game.
- Random Word Selection: A random word from the word bank will be selected randomly which adds variety and challenge to the game.
- Guessing Mechanism: The game keeps tracks of the guessed letters and updates the guessed word accordingly, and also sets a maximum number of guesses for each word. If the player exceeds the limit, they lose the game.
- Feedback and Progress: The game provides feedback by displaying the guessed word with revealed letters and underscores for hidden letters and it shows the guessed letters and the number of remaining guesses.
- Win/Loss Conditions: The game checks the win condition to determine if the player has guessed the entire word or not, and if the player loses all their guesses without guessing the word correctly, they lose the game.

## How to play ##
### Game Menu: ###

Once the game runs, it will present a menu to the player.
The menu offers two options:

Option 1: Play the game.
Option 2: Exit the game.

The player is prompted to enter their choice by inputting the corresponding number.

### Playing the Game: ###

If the player chooses to play the game (Option 1):
- A random word is obtained from the wordBank linked list using the getRandomWord() function.
- The chosen word becomes the target word that the player needs to guess.
- A new object of the Game class is created, initialized with the target word.
- The game begins, and the player has a limited number of guesses to correctly identify the word.
- The game provides the following information during each turn:
  1. The currently guessed word is displayed, showing the correctly guessed letters and     underscores for unguessed letters.
  2. The letters the player has guessed so far are shown.
  3. The number of remaining guesses is displayed.
- The player is required to enter a lowercase letter as their guess.
- If the input is not a lowercase letter, an error message is displayed, and the player is prompted to enter a valid lowercase letter.
- If the input is a valid lowercase letter, 
  1. The game checks if the letter is present in the target word.
  2. If the letter is correct, it is added to the guessed word, replacing the corresponding underscores.
- If the letter is incorrect, the number of remaining guesses decreases.
- The guessed letter is added to the list of guessed letters.
- The game continues until one of the following conditions is met:
  1. The player correctly guesses the word, in which case a congratulatory message is displayed.
  2. The player runs out of guesses, in which case the target word is revealed, and a message indicating failure is shown.

### Exiting the Game: ###

- If the player chooses to exit the game (Option 2):
  1. A goodbye message is displayed.
  2. The game terminates.


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

The first page of our game shows the greetings and menu for users to choose from, if they want to play Alphabet Adventure Game or exit.

![image](https://github.com/fwzrasyad/Alphabet-Adventure-CPT113/assets/121543815/96febe19-bca8-49f6-ab33-2d07bf8e7ffe)

Type in ‘1’ to play game

![image](https://github.com/fwzrasyad/Alphabet-Adventure-CPT113/assets/121543815/66569bee-3a2d-4658-a4af-3a19da0d237a)

Briefly, several underscores appear. Each underscore represents a letter to complete a word that is given randomly. The task is to guess the word in a certain amount of guesses only.

![image](https://github.com/fwzrasyad/Alphabet-Adventure-CPT113/assets/121543815/726a1a88-2174-4508-a3c5-97db75cc3599)

Enter any letter to start guessing. The shown example begins with any vocal letter (a, e, i, o, u) first as it is more likely to be correct.

![image](https://github.com/fwzrasyad/Alphabet-Adventure-CPT113/assets/121543815/3d67fdd4-a41d-4fc7-92cc-88c8e06c7c87)

The letter guessed before is wrong, as it doesn’t replace any underscore. The remaining guesses will be deducted. Try another letter.

![image](https://github.com/fwzrasyad/Alphabet-Adventure-CPT113/assets/121543815/4e2ba287-b150-4154-832c-b41e38d6bf16)

It’s wrong again. Need to key in another letter

![image](https://github.com/fwzrasyad/Alphabet-Adventure-CPT113/assets/121543815/73ac1c5a-20cf-44de-a27d-33e2895b02e6)

The letter keyed in is correct, it replaced an underscore. Guess another letter to replace all underscore and form the word within the remaining guesses left.

![image](https://github.com/fwzrasyad/Alphabet-Adventure-CPT113/assets/121543815/d6b9a870-4646-4cfa-b810-bb3c4f292a1b)

If the player gets the answer within the remaining guesses, the game will congratulate the player, and the player will win.

![image](https://github.com/fwzrasyad/Alphabet-Adventure-CPT113/assets/121543815/d169d3b2-6215-42a7-a9f1-b357b23db549)

Players lose if they run out of guesses and fail to complete the word. The correct answer will be shown below, and the player will lose the game.

![image](https://github.com/fwzrasyad/Alphabet-Adventure-CPT113/assets/121543815/be873f07-914c-444a-96a3-7600021edaa9)

Players can opt to play again. Random words will be given again for the next round. 

![image](https://github.com/fwzrasyad/Alphabet-Adventure-CPT113/assets/121543815/1ecc26d8-6b3d-4360-9471-78a04c65009f)

Overall, this is the screenshot if the player managed to win the game

![image](https://github.com/fwzrasyad/Alphabet-Adventure-CPT113/assets/121543815/01e33c11-642d-45e3-8660-f180e45df1cd)


## Alphabet Adventure Game Demo and Explanation Video ##
The video for the demo of the game can be accessed through this link:

[Alphabet Adventure Demo](https://youtu.be/y8AutS787_I)











