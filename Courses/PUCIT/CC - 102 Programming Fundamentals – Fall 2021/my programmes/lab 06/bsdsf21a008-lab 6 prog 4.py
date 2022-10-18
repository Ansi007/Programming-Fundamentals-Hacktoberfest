class  matric:
    a11 = 0
    a12 = 0
    a21 = 0
    a22 = 0
def determinant(b):
    b = ((b.a11)*(b.a22))-((b.a12)*(b.a21))
    return b
def printDet(m):
    l = [0]*2
    s = [0]*2
    l[0] = m.a11
    l[1] = m.a12
    s[0] = m.a21
    s[1] = m.a22
    print(l)
    print(s)
def main():
    matrix1 = matric()
    print("entering the values for 2x2 matrix")
    matrix1.a11 = int(input("enter the value of a11  "))
    matrix1.a12 = int(input("enter the value of a12  "))
    matrix1.a21 = int(input("enter the value of a21  "))
    matrix1.a22 = int(input("enter the value of a22  "))
    printDet(matrix1)
    print("the determinant of the above matrix is =",determinant(matrix1))
main()



