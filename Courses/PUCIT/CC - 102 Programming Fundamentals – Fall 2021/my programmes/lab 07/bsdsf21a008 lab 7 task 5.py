# defination of class
class rational:
    p = 0
    q = 0
# basic functionality
def printfrac(a):
    print(a.p,'/',a.q)
# functionality number 1
def createfrac(a):
    a = rational()
    a.p = int(input("enter the numerator"))
    a.q = int(input("enter the denominator"))
    if a.q == 0:
        raise Exception("invalid denominator")
    elif a.p == 0 and a.q == 0 :
        raise Exception("invalid denominator and numenator")
    else:
        return a
# functionality number 2 and 7
def simplefrac(a):
    if a.p == 0:
        a.p = 0
        a.q = 1
        return a
    elif a.p == a.q:
        a.p = 1
        a.q = 1
        return a
    elif (a.p == -(a.q)) or (-(a.p) == (a.q)):
        a.p = -1
        a.q = 1
        return a
    elif (not type(a.p) is int) or (not type(a.q) is int):
        raise Exception("invalid denominator and numenator")
    elif (a.p)%(a.q) == 0:
        a.p = (a.p//a.q)
        a.q = 1
        return a
    else:
        if a.p > a.q:
            s = a.q
        else:
            s = a.p
        i = 2
        gcd = 0
        while i <= s:
            if((a.p)%i == 0) and ((a.q)%i == 0):
                gcd = i
            i = i + 1
        if gcd != 0:
            a.p = (a.p//gcd)
            a.q = (a.q//gcd)
        return a
# functionality number 3
def convostring(a):
    c = str(str(a.p)+"/"+str(a.q))
    return c
# functionality number 4.a
def negfrac(a):
    a.p = -(a.p)
    return a
# functionality number 4.b
def resprofrac(a):
    m = a.p
    k = a.q
    a.p = k
    a.q = m
    return a
#  functionality number 5.a
def addFrac(a,b):
    m = rational()
    m.p = (a.p*b.q)+(b.p*a.q)
    m.q = (a.q)*(b.q)
    return m
# functionality number 5.b
def subfrac(a,b):
    m = rational()
    m.p = (a.p*b.q)-(b.p*a.q)
    m.q = (a.q)*(b.q)
    return m
# functionality number 6.a
def mulfarc(a,b):
    m = rational()
    m.p = (a.p*b.p)
    m.q = (a.q)*(b.q)
    return m
# functionality number 6.b
def divfrac(a,b):
    m = rational()
    m.p = (a.p*b.q)
    m.q = (a.q)*(b.p)
    return m
# functionality number 8
# converting into float forexample
def convofloat(a):
    b = float(a.p)
    c = float(a.q)
    return b,c
# functionality number 9
# deconverting from float
def deconvofloat(b,c):
    l = rational()
    l.p = int(b)
    l.q = int(c)
    return l
# deconverting from string as well + functionality number 10
def deconvostring(f):
    i = 0
    d = len(f)
    b = ""
    j = ""
    while f[i] != "/":
        b = b + f[i]
        i = i+1
    i = i + 1
    while i < d:
        j = j + f[i]
        i = i+1
    l = rational()
    l.p = int(b)
    l.q = int(j)
    return l
def main():
    print("for first rational number")
    test_rational1 = 0
    a = createfrac(test_rational1)
    print("the first fraction is",end="")
    printfrac(a)
    print("the simplified frcation 1 is ",end="")
    printfrac(simplefrac(a))
    print(" for second rational number")
    test_rational2 = 0
    b = createfrac(test_rational2)
    print("the second fraction is",end="")
    printfrac(b)
    print("the simplified frcation 2 is ",convostring(simplefrac(b)))
    print("the negation of string 1 is",convostring(negfrac(a)))
    print("the reciprocal  of string 1 is",convostring(resprofrac(a)))
    print("the sum of 1 and 2nd fraction is",convostring(addFrac(a,b)))
    print("the difference of 1 and 2nd fraction is",convostring(subfrac(a,b)))
    print("the product of 1 and 2nd fraction is",convostring(mulfarc(a,b)))
    print("the division of 1 and 2nd fraction is",convostring(divfrac(a,b)))
    m,k = convofloat(a)
    print(type(m), type(k))
    g = deconvofloat(m,k)
    print(type(g))
    j = convostring(b)
    print(type(j))
    o = deconvostring(j)
    print(type(o))
main()

















