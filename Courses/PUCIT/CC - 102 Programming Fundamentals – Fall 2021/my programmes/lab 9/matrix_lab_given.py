class Matrix:
    pass


def createMatrix(rows, cols):
    m = Matrix()
    m.RowCount = rows
    m.ColumnCount = cols
    m.Data = [[0 for c in range(cols)] for r in range(rows)]
    return m


def inputMatrix(m):
    i = 0
    while i < m.RowCount:
        j = 0
        while j < m.ColumnCount:
            m.Data[i][j] = int(input())
            j += 1
        i += 1
    return


def printMatrix(m):
    i = 0
    while i < m.RowCount:
        j = 0
        while j < m.ColumnCount:
            print(m.Data[i][j], end=" ")
            j += 1
        print()
        i += 1
    return

def transposeMatrix(m):
    t = createMatrix(m.ColumnCount, m.RowCount)
    i = 0
    while i < t.RowCount:
        j = 0
        while j < t.ColumnCount:
            t.Data[i][j] = m.Data[j][i]
            j += 1
        i += 1
    return t

def main():
    two2 = createMatrix(2, 2)
    print("Enter 4 intgers for a 2 X 2 Matrix")
    inputMatrix(two2)
    print("The entered Matrix is")
    printMatrix(two2)
    print()

    three2 = createMatrix(3, 2)
    print("Enter 6 intgers for a 3 X 2 Matrix")
    inputMatrix(three2)
    print("The entered Matrix is")
    printMatrix(three2)
    print()

    two3 = transposeMatrix(three2)
    print("The transpose of above Matrix is")
    printMatrix(two3)
    print()

#main()
