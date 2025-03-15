import random

import os

import re

os.system('cls' if os.name=='nt' else 'clear')

while (1 < 2):

print ("\n")

print ("Rock, Paper, Scissors - Shoot!")

userChoice = input("Choose your weapon [R]ock], [P]aper, or [S]cissors: ")

if not re.match("[SsRrPp]", userChoice):

print ("Please choose a letter:")

print ("[R]ock, [S]cissors or [P]aper.")

# Echo the user's choice

print ("You chose: " + userChoice)

choices = ['R', 'P', 'S']

opponenetChoice = random.choice(choice)

print ("I chose: " + opponenetChoice)

if opponenetChoice == str.upper(userChoice) and str.upper(userChoice) == "P"

print ("Tie! ")

#if opponenetChoice == str("R") and str.upper(userChoice) == "P"

elif opponenetChoice == 'R' and userChoice.upper() == 'S':

print ("Rock beat scissors, I win! ")

elif opponenetChoice == 'S' and userChoice.upper() == 'P':

print ("scissors beat paper, I win! ")

elif opponenetChoice == 'P' and userChoice.upper() == 'R':

print ("Paper beat rock, I win!")

else:

print ("You win!")
