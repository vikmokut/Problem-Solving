import random
from modules import guessGame

help(guessGame)
secretNum = random.randint(1, 10)
playerGuess = int(input("Enter your guess or 0 to exit: "))

guessGame(secretNum, playerGuess)