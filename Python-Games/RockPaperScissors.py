# This a simple rock, paper, scissors game 
import random

def gameWin(comp, you):
    if comp==you:
        return None
    elif comp== 'r':
        if you== 's':
            return False
        elif you== 'p':
            return True
    elif comp== 'p':
        if you== 'r':
            return False
        elif you== 's':
            return True
    elif comp== 's':
        if you== 'p':
            return False
        elif you== 'r':
            return True
    


print("Computer turn: \n Rock(r) Paper(p) or Scissors(s)? : ")

randValue= random.randint(1,3)
if randValue==1:
    comp= 'r'
if randValue==2:
    comp= 'p'
if randValue==3:
    comp= 's'


you = input("Your Turn:\n Rock(r) Paper(p) or Scissors(s)? : ")
a= gameWin(comp, you)

print(f"Computer chose: {comp}")
print(f"You chose: {you}")

if a==None:
    print("TIE!!!!")
elif a:
    print("You WIN!!!")
else:
    print("You LOSE!!!")