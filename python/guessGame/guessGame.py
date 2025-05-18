def guessGame(secretNum, playerGuess):
    """
    This function implements a simple number guessing game.
    The player has to guess a randomly generated number between 1 and 10.
    The player can exit the game by entering 0.
    """
    # Check if the player guessed the number or chose to exit
    while (1):
        if playerGuess == secretNum:
            print("Congratulations, you won!")
            break
        elif playerGuess == 0:
            print("You chose to exit the game.")
            break
        else:
            print("Incorrect guess, try again!")
            playerGuess = int(input("Enter your guess or 0 to exit: "))