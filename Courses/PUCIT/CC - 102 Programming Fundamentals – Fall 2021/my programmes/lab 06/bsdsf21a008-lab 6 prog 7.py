def sumArray(arr,size):
    i = 0
    Sum = 0
    while i < size:
        Sum = Sum + arr[i]
        i = i + 1
    return Sum
def average(Sum,size):
    avg = Sum / size
    return avg
def countAboveAvg(arr,size,avg):
    m = 0
    c = 0
    while m < size:
        if arr[m] > avg:
            c = c + 1
        m = m + 1
    return c
def createArray():
    siz = int(input("enter the size of array you want to create"))
    a = [0]*siz
    f = 0
    while f < siz:
        a[f] = int(input("enter values "))
        f = f + 1
    return a , siz
def main():
    arrayA , size = createArray()
    sumarray = sumArray(arrayA,size)
    print("the sum of all the values of array is ",sumarray)
    avg = average(sumarray,size)
    print("the average of all the values of array is ",avg)
    count = countAboveAvg(arrayA,size,avg)
    print("the the count above average  of array is ",count)
main()





