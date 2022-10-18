from matrix import *
def isSqareMatrix(m):
    r = m.RowCount
    c = m.ColumnCount
    if r == c:
        return True
    else:
        return False
def createIdentityMatrix(rows,cols):
    if rows != cols:
        raise "Not a Square Matrix,only sqare matrix can be identity"
    else:
        m = createMatrix(rows, cols)
        i = 0
        while i < m.RowCount:
            j = i
            m.Data[i][j] = 1
            i += 1
    return m
def subtractMatrices(m1,m2):
    if m1.RowCount != m2.RowCount and m1.ColumnCount != m2.ColumnCount:
	    raise "Only matrices with same order can be sbtracted"
    else:
        r = createMatrix(m1.RowCount, m1.ColumnCount)
        i = 0
        while i < r.RowCount:
            j = 0
            while j < r.ColumnCount:
                r.Data[i][j] = m1.Data[i][j] - m2.Data[i][j]
                j += 1
            i += 1
        return r
def multiplyMatrices(m1,m2):
    if m1.ColumnCount != m2.RowCount :
	    raise "matrices cannot be mltiplied"
    else:
        r = createMatrix(m1.RowCount, m2.ColumnCount)
        i = 0
        while i < m1.RowCount:
            j = 0
            while j < m2.ColumnCount:
                k = 0
                s = 0
                while k < m1.ColumnCount:
                    s = (m1.Data[j][k])*(m2.Data[k][j])+s
                    k = k + 1
                r.Data[i][j]= s
                j = j + 1
            i = i + 1
        return r
def test():
    a = createIdentityMatrix(2,2)
    b = createIdentityMatrix(2,2)
    print("the sqare matrix is")
    printMatrix(a)
    if(isSqareMatrix(a)):
        print("the matrix is sqare")
    k = subtractMatrices(a,b)
    print("the difference of two 2x2 identity matrices is")
    printMatrix(k)
    print()
    print("enter vales for 1x3 and 3x1 matrix")
    a = createMatrix(1,3)
    inputMatrix(a)
    b = createMatrix(3,1)
    inputMatrix(b)
    print("the first and second matrix is:")
    printMatrix(a)
    printMatrix(b)
    print("the prodct of first and second matrix is:")
    k = multiplyMatrices(a,b)
    printMatrix(k)
test()


