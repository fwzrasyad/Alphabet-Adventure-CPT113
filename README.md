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

## Concept of The Game ##
Alphabet Adventure used object-oriented concepts by dividing the game into classes which encapsulate the data and behaviour that allows for easier organization and maintenance. The game is divided into multiple objects such as 'Game', 'LinkedList' and 'Node' that interacts with each other to perform specific information. An example of this is the object ‘Game’ interacts with ‘LinkedList’ to retrieve a random word from the word bank. 

The linked list used in Alphabet Adventure acts to store the words in the word bank. The ‘WordBank’ class manages the linked list of words. It has a ‘head’ pointer that points to the first node in the linked list. It also has a member function ‘loadWordsFromFile’ that reads the words from wordbank.txt and fills in the linked list with the words. Each word from the file is added as a new node at the end of the linked list. The class also has the member function ‘getRandomWord’ that randomly selects a word from the linked list to be used in the game.

