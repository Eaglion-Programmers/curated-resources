num1 = 16
num2 = 20


def calculate_lcm(x, y):
    if x > y:
        greater = x
    else:
        greater = y

    while(True):
        if((greater % x) == 0 and (greater % y) == 0):
            lcm = greater
            break
        greater += 1
    return lcm

print("LCM = ", calculate_lcm(num1, num2))

