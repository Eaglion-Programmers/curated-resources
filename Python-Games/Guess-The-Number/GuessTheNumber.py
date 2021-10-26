'''
This is a simple python game where you have to guess the 
correct number given by the computer.
If your gussses are less than the high score it will update the Hi-Score.txt file

'''

import random

randNum = random.randint(1, 100)
# print(randNum) #Prints the number chosen by the computer
usrGuess= None
guesses=0

while(usrGuess != randNum):
    try:    
        usrGuess= int(input("Enter your guess: "))
        guesses +=1 
        
        if (usrGuess== randNum):
                    print("Your guess was right!!!!")
        else:
            if(usrGuess>randNum):
                        print("Your guess was bigger enter a smaller guess")
            else:
                        print("Your guess was smaller enter a bigger guess")
    except Exception as e:
        print("Enter a integer not a string")   
        
print(f"You gussed the number in {guesses} guesses") #This shows the number of guesses after you win

with open("Hi-Score.txt") as f: #Chnage this location according to you needs
    hiscore= int(f.read()) 

if(guesses<hiscore):
    print("Congrats!!! You just beat the High Score") #this updates the Hi-Score.txt file if you beat the high score
    with open("Hi-Score.txt", "w") as f: #Chnage this location according to you needs
        f.write(str(guesses)) 