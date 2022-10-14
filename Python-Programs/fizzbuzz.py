def fizzbuzz(num):

    str1 = ""
    array = []
    # print(type(int(num)))
    num = int(num)
    i = 1
    for i in range(1,num+1):
        if i % 3 == 0 and i % 5 == 0:
            str1 = 'FizzBuzz'
            array.append(str1)
            continue
        elif i % 3 == 0:
            str1 = 'Fizz'
            array.append(str1)
            continue
        elif i % 5 == 0:
            str1 = 'Buzz'
            array.append(str1)
            continue
        array.append(i)

    return array


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    num = input("Enter a number:")
    array = fizzbuzz(num)
    print(array)
