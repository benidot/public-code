# little guessing game

import random

trivia = {
    "cat":"silly internet animal",
    "dog":"man's best friend",
    "guitar":"string instrument",
    "piano":"key instrument",
    "saxophone":"wind instrument",
    "violin":"string instrument but you bow that shit",
    "toffee":"lil caramel thing",
    "chocolate":"congolese children make it well"
}

supa = list(trivia.items())

choice = random.choice(supa)

while True:
    print(choice[1])
    ans = input("guess: ")
    if ans == choice[0]:
        print("correct")
        break