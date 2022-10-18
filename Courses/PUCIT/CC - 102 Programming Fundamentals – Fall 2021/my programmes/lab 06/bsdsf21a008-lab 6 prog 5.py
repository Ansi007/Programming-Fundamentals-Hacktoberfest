class vector:
    x = 0
    y = 0
    z = 0
def createVector(i,j,k):
    x_comp = str(i)
    y_comp = str(j)
    z_comp = str(k)
    Vector = x_comp+"x"+"+"+y_comp+"y"+"+"+z_comp+"z"
    return Vector
def ReverseVector(v):
    revV = "-"+v
    return revV
def AddVector(vec1,vec2):
    resx = str(vec1.x + vec2.x)
    resy = str(vec1.y + vec2.y)
    resz = str(vec1.z + vec2.z)
    sumVec = resx+"x"+"+"+resy+"y"+"+"+resz+"z"
    return sumVec
def dotProd(vec1,vec2):
    resx = vec1.x * vec2.x
    resy = vec1.y * vec2.y
    resz = vec1.z * vec2.z
    scalarProd = resx+resy+resz
    return scalarProd
def crossProd(vec1,vec2):
    c1 = ((vec1.y)*(vec2.z)) - ((vec1.z)*(vec2.y))
    c2 = ((vec1.z)*(vec2.x)) - ((vec1.x)*(vec2.z))
    c3 = ((vec1.x)*(vec2.y)) - ((vec1.y)*(vec2.x))
    c = str(c1)+"i"+"+"+str(c2)+"j"+"+"+str(c3)+"k"
    return c
def magnitude(v):
    meg = ((v.x)**2+(v.y)**2+(v.z)**2)**(1/2)
    return meg
# demonstarting the usage of functions
def main():
    vector1 = vector()
    vector1.x = int(input("enter the x component of v1"))
    vector1.y = int(input("enter the y component of v1"))
    vector1.z = int(input("enter the z component of v1"))
    vector2 = vector()
    vector2.x = int(input("enter the x component of v2"))
    vector2.y = int(input("enter the y component of v2"))
    vector2.z = int(input("enter the z component of v2"))
    # now using the functions
    print("folowing are the two vectors")
    print(createVector(vector1.x,vector1.y,vector1.z))
    print(createVector(vector2.x,vector2.y,vector2.z))
    print("the reverse of both vectors are")
    print(ReverseVector(createVector(vector1.x,vector1.y,vector1.z)))
    print(ReverseVector(createVector(vector2.x,vector2.y,vector2.z)))
    print("the addition of the two vectors is")
    print(AddVector(vector1,vector2))
    print("the dot product of two vector is")
    print(dotProd(vector1,vector2))
    print("the cross product of two vectors is")
    print(crossProd(vector1,vector2))
    print("the magnitude of vector 1 andvector 2 is as follows ")
    print(magnitude(vector1))
    print(magnitude(vector2))
main()











