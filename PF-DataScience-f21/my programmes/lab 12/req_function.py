def grad(n):
    if n >= 0 and n < 50:
        return "F"
    elif n >= 50 and n < 55:
        return "D"
    elif n >= 55 and n < 58:
        return "C-"
    elif n >= 58 and n < 61:
        return "C"
    elif n >= 61 and n < 65:
        return "C+"
    elif n >= 65 and n < 70:
        return "B-"
    elif n >= 70 and n < 75:
        return "B"
    elif n >= 75 and n < 80:
        return "B+"
    elif n >= 80 and n < 85:
        return "A-"
    elif n >= 85 and n < 100:
        return "A"
    else:
        return "invalid data"
def returnName(c):
    a = str(c)
    j = len(c)
    i = 0
    s = ""
    while i < j:
        if ord(a[i]) == ord("\t"):
            return s
        else:
            s = s + str(a[i])
        i = i + 1
    return s
def slicing(a):
    m = str(a)
    a = m[-9:]
    k = len(a) - 1
    i = 0
    l = "1"
    while i < k:
        l = l + str(a[i])
        i = i + 1
    firstHalf = l[0:6]
    secondHalf = l[-5:]
    sessional = int(firstHalf[0:3])- 100
    mids = int(firstHalf[-2:])
    finals = int(secondHalf[-2:])
    return sessional,mids,finals


