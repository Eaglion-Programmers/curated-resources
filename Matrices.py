class Matrix():
    def _init_(self, order='3x3'):
        self.order = order.split('x')
        self.rows = int(self.order[0])
        self.cols = int(self.order[-1])

        self.getdata()

    def _str_(self):
        return self.data

    def getdata(self):
        self.data = []
        print("For Matrix of order {}".format('x'.join(self.order)))
        for i in range(self.rows):
            prompt = "Enter elements of row {}: ".format(i + 1)
            self.data.append([int(x) for x in input(prompt).split(' ')])

    def add(self, other):
        if self.order == other.order:
            addition = [[self.data[i][j] + other.data[i][j]
                         for j in range(self.cols)] for i in range(self.rows)]
            return addition
        else:
            return None

    def subtract(self, other):
        if self.order == other.order:
            difference = [[self.data[i][j] - other.data[i][j]
                          for j in range(self.cols)] for i in range(self.rows)]
            return difference
        else:
            return None

    def multiply(self, other):
        if self.cols == other.rows:
            product = [[0 for i in range(other.cols)]
                       for j in range(self.rows)]
            for i in range(self.rows):
                for j in range(other.cols):
                    for k in range(other.rows):
                        product[i][j] += self.data[i][k] * other.data[k][j]
            return product
        else:
            return None

    def transpose(self):
        tpose = [[self.data[j][i]
                  for j in range(self.cols)] for i in range(self.rows)]
        return tpose


def menu():
    print("MAIN MENU")
    print("1. Add Matrices")
    print("2. Subtract Matrices")
    print("3. Multiply Matrices")
    print("4. Transpose both Matrices")
    print("5. Change Matrices")
    print("6. Exit Program")


menu()
A = Matrix(input("\nEnter order of first Matrix: "))
B = Matrix(input("\nEnter order of second Matrix: "))

while True:
    ch = input("\nEnter your choice: ")
    if ch == '1':
        print("\nSum of the two Matrices is :")
        print(A.add(B))
    elif ch == '2':
        print("\nDifference of the two Matrices is :")
        print(A.subtract(B))
    elif ch == '3':
        print("\nProduct of the two Matrices is :")
        print(A.multiply(B))
    elif ch == '4':
        print("\nTranspose of the first Matrix is :")
        print(A.transpose())
        print("\nTranspose of the second Matrix is :")
        print(B.transpose())
    elif ch == '5':
        print("\nChanging Matrices. Input new values:")
        A = Matrix(input("\nEnter order of first Matrix: "))
        B = Matrix(input("\nEnter order of second Matrix: "))
    elif ch == '6':
        print("\nExiting Program")
        break
    else:
        print("Enter valid input!\n\n")
        menu()



